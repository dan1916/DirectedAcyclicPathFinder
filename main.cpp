/* 
 * File:   main.cpp
 * Author: Dhavalkumar Suthar
 *
 * Created on October 4, 2015, 3:29 PM
 */

#include <cstdlib>
#include <iostream>
#include "Graph.h"
using namespace std;

/*
 * This program tests the functionality of the PathFinder. 
 * Given a graph, it tests whether there exists a path between given two
 * nodes or not.
 */
int main(int argc, char** argv) {

    //Allocate a graph object...
    Graph myGraph(5);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 4);
    myGraph.addEdge(2, 0);
    myGraph.addEdge(3, 3);
    myGraph.addEdge(2, 3);
    myGraph.addEdge(4, 2);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 2);
    
    //Define starting and ending vertices...
    int startingPoint = 0;
    int endingPoint = 3;
    
    //Check if two vertices are connected or not..
    if (myGraph.isConnected(startingPoint, endingPoint))
    {
        cout << "Vertice "<< startingPoint << " and " << endingPoint << " are connected";
    }
    else
    {
        cout << "Vertice "<< startingPoint << " and " << endingPoint << " are NOT connected\n";
    }
        
    //Once again Check if two vertices are connected or not..
    startingPoint = 4, endingPoint = 1;
    
    if (myGraph.isConnected(startingPoint, endingPoint))
    {
        cout << "Vertice "<< startingPoint << " and " << endingPoint << " are connected";
    }
    else
    {
        cout << "Vertice "<< startingPoint << " and " << endingPoint << " are NOT connected";
    }
    
    //One final time Check if two vertices are connected or not..
    startingPoint = 3, endingPoint = 1;
    
    if (myGraph.isConnected(startingPoint, endingPoint))
    {
        cout << "Vertice "<< startingPoint << " and " << endingPoint << " are connected";
    }
    else
    {
        cout << "Vertice "<< startingPoint << " and " << endingPoint << " are NOT connected";
    }
    
    return 0;
}

