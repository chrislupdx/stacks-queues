//Chris Lu
//Project #2
//Stack.h
//This is the implementation of the .h file for a stack of packages.
//The data structure beneath this adt is a an array of linear linked lists
//comprised of a main node which have in it as a member, a linear linked list.
//arrNodes should possess five nodes. We can 

#include "arrNode.h"

class stack
{
    public:

        //Default constructor
        stack();

        //Destructor 
        ~stack();

        int deleteAll(arrNode *& top);

        int push(package * package_toadd); 
        int pop(package *& popped);

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

    private:
        int topIndex = 0;
        arrNode * top;//where does logic for counting go
};
