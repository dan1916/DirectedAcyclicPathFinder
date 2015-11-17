#include "Graph.h"

//Initializes a new instance of graph with a specified number of vertices.
Graph::Graph(int howManyVertices) {
    //First we set the number...
    this->numberOfVertices = howManyVertices;
    
    //And now we allocate a blank list, which will hold the adjacency matrix.
    listOfAdjacencyLists = new list<int>[howManyVertices];
}

//Adds an edge between two vertices.
void Graph::addEdge(int firstVertex, int secondVertex) 
{
    //All we have to do is to push a link into the first vertex's position.
    listOfAdjacencyLists[firstVertex].push_back(secondVertex); 
}

//Gets a value indicating whether there exists a path from the first vertex to
//the second one. Uses BFS internally.
bool Graph::isConnected(int firstVertex, int secondVertex)
{
    //First we have to check whether we're on the second vertex or not..
    if (firstVertex == secondVertex)
    {
        return true;
    }
    
    //The we have to initially mark all the vertices as not visited...
    bool *visited = new bool[numberOfVertices];
    for (int i = 0; i < numberOfVertices; i++)
    {
        visited[i] = false;
    }
    
    // Create a queue for BFS
    list<int> bfsQueue;

    visited[firstVertex] = true;
    bfsQueue.push_back(firstVertex);

    list<int>::iterator qIterator;

    while (!bfsQueue.empty())
    {
        //Get the currently pointed vertex..
        firstVertex = bfsQueue.front();
        bfsQueue.pop_front();

        //For all the adjacent vertices of the firstVertex, If a adjacent has
        //not been visited, then mark it visited and push back to the Q...
        
        for (qIterator = listOfAdjacencyLists[firstVertex].begin(); qIterator != listOfAdjacencyLists[firstVertex].end(); ++qIterator)
        {
            //Check if this is what we wanted. If yes, have to return..
            if (*qIterator == secondVertex)
            {
                return true;
            }
                
            //If not, we have to continue...
            if (!visited[*qIterator]) 
            {
                visited[*qIterator] = true;
                bfsQueue.push_back(*qIterator);
            }
        }
    }

    return false;
}
