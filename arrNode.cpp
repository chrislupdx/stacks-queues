//Chris Lu
//Program #2
//arrNode.cpp
//This is the implementation of the .h file for the arrNode.
//arrNodes are used in my LLL of arrays to house sets of five
//packages at once.  While packNodes are written into,
//arrNodes are the simplest unit of movement (with regards to enqueue and dequeue)
#include "arrNode.h"

//This is the default contructor for arrNode. 
//It initializes with 
arrNode::arrNode()
{
    packages = new package[5];
    next = nullptr;
}

arrNode::~arrNode()
{
    if(packages) //the rest of the array
        delete [] packages;
}

int arrNode::displayPackages()
{
    //iterate through packArr
    int count = 0;
    do
    {
    packages[count].display();
    }
    while(count < 5);
    
    return 1;
}
