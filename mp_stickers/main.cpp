#include "Image.h"
#include "StickerSheet.h"

int main() {
  Image alma;

  Image stars;
  Image saturn;
  Image rocket;

  

  alma.readFromFile("alma.png");
  stars.readFromFile("stars.png");
  saturn.readFromFile("saturn.png");
  rocket.readFromFile("rocket.png");


  //make the sticker sheet
  StickerSheet *sheeting = new StickerSheet(alma, 3);

  //resize some stuff
  //saturn.resize(50, 50);
  //rocket.resize( 10, 25);


  sheeting->addSticker(stars, 200, 75);
  sheeting->addSticker(saturn, 950,0);
  sheeting->addSticker(rocket, 50, 500);
  


  // sheet.addSticker(stars, 25, 25);
  // sheet.addSticker(saturn, 180, 200);
  // sheet.addSticker(rocket, 50, 120);

  Image myImage = sheeting->render();
  myImage.writeToFile("myImage.png");

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //

  return 0;
}
