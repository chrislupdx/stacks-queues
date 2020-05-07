//Chris Lu
//Project #2
//Stack.h
//This is the implementation of the .h file for a stack of packages.
//The data structure beneath this adt is a an array of linear linked lists
//comprised of a main node which have in it as a member, a linear linked list.
//arrNodes should possess five nodes. We can 

#include "mainNode.h"
#include "arrNode"

class stack()
{
    public:
 
  //Default constructor
  //stack();

  //Destructor 
  //~stack();

    int count = 0;
  //int push(); //assuming max = 5
    //c1: empty
    //create a new arraynode 
    //create a new array of arraynode size
    //packList[0].copypackNode(arraynode[fromabv]) (this is what pushing is)
    //increment top index (it should be + 1)

    //c2: not empty+have room 
    //if(top < 5) we have rom in the arrNode
    //see above for push logic
    //(see27) (then usetopindx instead of 0)

  //int pop();
 
    //c3: 1 left (check this one first)
  //c1: (not removing the last thing)
    //if topindex(!0) 
    //topindex--
 
    //c2: empty
    //cout byby
   
    
    //int peek();
    //c1 empty
    //c2 thing
    
    
    //int displayStack(); 
   
    
    private;
    arrNode * top;//where does logic for counting go
    //top represents how full the front node is
    //every other node(but the 1st) will have a completely full array
    

    //if no nodes or if current node is full, create new arrNode
}
