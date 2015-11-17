/* 
 * File:   Graph.h
 * Author: Dhavalkumar Suthar
 *
 * Created on October 4, 2015, 3:30 PM
 */

#ifndef GRAPH_H
#define	GRAPH_H

#include<iostream>
#include <list>

using namespace std;

/* This class represents a directed graph using adjacency list representation
*  and provides us a very basic functionality of telling whether two nodes
*  are connected together or not. It does so by applying the Breadth First Search
 * algorithm.
*/
class Graph {

//Define the private methods...    
private:
    int numberOfVertices; //A number holding total # of vertices
    list<int> *listOfAdjacencyLists; //A list pointer to an array containing adjacency lists.

//Define the public methods...    
public:
    
    //Initializes a new instance of graph with a specified number of vertices.
    Graph(int howManyVertices); 
    
    //Adds an edge between two vertices.
    void addEdge(int firstVertex, int secondVertex); 
    
    //Gets a value indicating whether there exists a path from the first vertex to
    //the second one. Uses BFS internally.
    bool isConnected(int firstVertex, int secondVertex); 
};


#endif	/* GRAPH_H */

