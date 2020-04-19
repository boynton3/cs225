/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */

    
    //convert tile image to coordinates
    //map each point 
    map<Point<3>, unsigned> tiles;
    vector<Point<3>> points;

    //making mosaic image thingy
    int columns = theSource.getColumns();
    int rows = theSource.getRows();
    MosaicCanvas* mosaic = new MosaicCanvas(rows, columns);

    for (unsigned int i = 0; i < theTiles.size(); i++) {
        //this resolves our whole RGB pixel problem
        Point<3> convert = convertToXYZ(theTiles[i].getAverageColor());
        //points[i] = convert;
        points.push_back(convert);
        //tiles[points[i]] = i;
        //tiles.insert(pair<Point<3>,tiles>())
        tiles.insert(pair<Point<3>, size_t>(convert, i));
        
    } 

    //setting uo KDTree with tiles
    KDTree<3> source(points);

    //traverse the image into the mosaic canvas
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            //neeed to find closest as an coordinate point
            //to find coordinates of point, use map
            int idx = tiles[source.findNearestNeighbor(convertToXYZ(theSource.getRegionColor(i,j)))];
            mosaic-> setTile(i, j, &theTiles[idx]);
        }
    }


    return mosaic;
}

