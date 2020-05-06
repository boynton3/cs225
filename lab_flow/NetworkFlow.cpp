/**
 * @file NetworkFlow.cpp
 * CS 225: Data Structures
 */

#include <vector>
#include <algorithm>
#include <set>

#include "graph.h"
#include "edge.h"

#include "NetworkFlow.h"

int min(int a, int b) {
  if (a<b)
    return a;
  else return b;
}

NetworkFlow::NetworkFlow(Graph & startingGraph, Vertex source, Vertex sink) :
  g_(startingGraph), residual_(Graph(true,true)), flow_(Graph(true,true)), source_(source), sink_(sink) {

  // YOUR CODE HERE
  
  //need to copy over vertices
  //and copy over edges 
  vector<Vertex> v = g_.getVertices();
  vector<Edge> e = g_.getEdges();

  //this is copying the vertices over
  for (unsigned i = 0; i < v.size();i++) {
    //make temp
    Vertex tempV = v[i];
    flow_.insertVertex(tempV);
    residual_.insertVertex(tempV);
  }

  //now copy over edges
  for (unsigned j = 0; j < e.size(); j++) {
    Edge tempE = e[j];
    //insert edge to flow
    flow_.insertEdge(tempE.source, tempE.dest);
    flow_.setEdgeWeight(tempE.source, tempE.dest, 0);

    //inserting edge to residual and reverse edge
    residual_.insertEdge(tempE.source, tempE.dest);
    residual_.insertEdge(tempE.dest, tempE.source);

    //
    residual_.setEdgeWeight(tempE.source, tempE.dest, tempE.getWeight());
    residual_.setEdgeWeight(tempE.dest, tempE.source, 0);

  }
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the helper function.
   *
   * @param source  The starting (current) vertex
   * @param sink    The destination vertex
   * @param path    The vertices in the path
   * @param visited A set of vertices we have visited
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, 
  std::vector<Vertex> &path, std::set<Vertex> &visited) {

  if (visited.count(source) != 0)
    return false;
  visited.insert(source);

  if (source == sink) {
    return true;
  }

  vector<Vertex> adjs = residual_.getAdjacent(source);
  for(auto it = adjs.begin(); it != adjs.end(); it++) {
    if (visited.count(*it) == 0 && residual_.getEdgeWeight(source,*it) > 0) {
      path.push_back(*it);
      if (findAugmentingPath(*it,sink,path,visited))
        return true;
      else {
        path.pop_back();
      }
    }
  }

  return false;
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the main function.  It initializes a set to keep track of visited vertices.
   *
   * @param source The starting (current) vertex
   * @param sink   The destination vertex
   * @param path   The vertices in the path
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, std::vector<Vertex> &path) {
   std::set<Vertex> visited;
   path.clear();
   path.push_back(source);
   return findAugmentingPath(source,sink,path,visited);
}

  /**
   * pathCapacity - Determine the capacity of a path in the residual graph.
   *
   * @param path   The vertices in the path
   */

int NetworkFlow::pathCapacity(const std::vector<Vertex> & path) const {
  // YOUR CODE HERE

  //this is the right idea
  //but this is dumb and you're wrong
  int tempW = residual_.getEdgeWeight(path.at(0), path.at(1));
  vector<int> v;

  //check every node EXCEPT for last
  for(size_t i = 0; i < path.size() - 1; i++) {
    Edge e = residual_.getEdge(path[i], path[i+1]);

    int getW = e.getWeight();
    if (getW < tempW) {
      tempW = getW;
    } 
  }
  

  return tempW;
}

  /**
   * calculuateFlow - Determine the capacity of a path in the residual graph.
   * Sets the member function `maxFlow_` to be the flow, and updates the
   * residual graph and flow graph according to the algorithm.
   *
   * @return The network flow graph.
   */

const Graph & NetworkFlow::calculateFlow() {
  // YOUR CODE HERE

  //use the "findArgumentPath thingy (so while it's true)
  //otherwise, if it's empty than there are no more paths
  //or when pathCapacity is =-1
  //BIG DUMB

  vector<Vertex> v;
  int ct = 0;

  while(findAugmentingPath(source_, sink_, v)) {
    int capacity = pathCapacity(v);
    //ct = ct + capacity;
    //I have no clue how this is gonna work but here we go
    //we need to throw around the capacity

    //capacity from the edges and then add it to the reverse ones
    //thennnnn add to path in flow grpah
    //NEED TO CHECK REVERSE OR NOT
    //if not, then same direction = add capacity
    //if it is, then reverse = subtrate residual
    //and add it reverse
    for(unsigned i = 0; i < v.size() - 1; i++) {
      Vertex source = v[i];
      Vertex destination = v[i+1];

      int weight_for = flow_.getEdgeWeight(source, destination);
      int weight_back = flow_.getEdgeWeight(destination, source);

      int residual_weight_for = residual_.getEdgeWeight(source, destination);
      int residual_weight_back = residual_.getEdgeWeight(destination, source);

      //might have to switch these
      residual_.setEdgeWeight(source, destination, (residual_weight_for-capacity));
      residual_.setEdgeWeight(destination, source, (residual_weight_back+capacity));      
      
      //checking is same direction or not
      if (flow_.edgeExists(source, destination)) {
        flow_.setEdgeWeight(source, destination, (weight_for+capacity));
      } else if (flow_.edgeExists(destination, source)) {
        flow_.setEdgeWeight(destination, source, weight_back-capacity);
      }

    }
  }
  for (unsigned i = 0; i < flow_.getAdjacent(source_).size(); i++){ 
    Vertex tempV = flow_.getAdjacent(source_)[i];
    int tmp = flow_.getEdgeWeight(source_, tempV);
    ct = ct + tmp;
  }
  maxFlow_ = ct;
  return flow_;
}

int NetworkFlow::getMaxFlow() const {
  return maxFlow_;
}

const Graph & NetworkFlow::getGraph() const {
  return g_;
}

const Graph & NetworkFlow::getFlowGraph() const {
  return flow_;
}

const Graph & NetworkFlow::getResidualGraph() const {
  return residual_;
}

