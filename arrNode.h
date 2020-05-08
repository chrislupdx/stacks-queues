//Chris Lu
//Program #2
//arrNode.h
//This is the implementation of the .h file for the arrNode.
//arrNodes are used in my LLL of arrays to house sets of five
//packages at once.  While packNodes are written into,
//arrNodes are the simplest unit of movement (with regards to enqueue and dequeue)

#include "package.h"

struct arrNode
{
    arrNode();
    ~arrNode();

    //int createEmpties(package *& packArr);
    //int deleteList(arrNode *& next);
    int displayPackages(); 
    
    //produce 5 empty packnodes upon requisition //idk if this happening yet
    arrNode * next;
    package * packages;

};
