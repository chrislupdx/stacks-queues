//Chris Lu
//Project #2
//Stack.cpp
//This is the implementation of the .h file for a stack of packages.
//The data structure beneath this adt is a an array of linear linked lists
//comprised of a main node which have in it as a member, a linear linked list.
#include "stack.h"
//using namespace std;   
//Default constructor
stack::stack()
{
    top = nullptr;
}

int stack::deleteAll(arrNode *& top)
{
    //otw
    if(!top) return 1;
    if(top)
    {
        arrNode * temp = top->next;
        delete top;
        top = temp;
    }
    deleteAll(top->next);
    return 1;
}

//Destructor 
stack::~stack()
{
    if(!top) return;
    deleteAll(top);
}

//push places a 
int stack::push(package * package_toadd)
{
    //if we're empty 
    if(top == nullptr) //it'll also catch at the end
    {
    arrNode * temp = new arrNode;
    temp->packages[0].copyPackage(package_toadd);
    topIndex++;
    return 1; 
    }

    if(topIndex == 5) //1 slot left
    {
        arrNode * temp = top; //hold onto the rest 
        arrNode * new_node = new arrNode;
        top = new_node;
        top->next = temp;
        top->packages[0].copyPackage(package_toadd);
        topIndex = 1;
        return 1;
    }
    else  //over 0 under 5
    {
       top->packages[topIndex++].copyPackage(package_toadd); //0 excuse for postdecrement
       return 1; 
    }

    return 1;
}

int stack::pop(package *& popped)
{
    //if empty
    if(top == nullptr)
    {
        cout << " empty";
        return 1;
    }
    
    //if there is only one node in the stack
    else if(topIndex == 1) //or 0?
    {
        popped->packages = top->packages; //ough do we need to manually copy all 5
        top->packages.clean(); //just blanks it
        if(top->next)
        {
            top = top->next; //move down the stack 1
            topIndex = 5; //set topIndex to point to the top of the heap
        }
        //are there any weird elses? 
        return 1;
    }
     
   
    else
    {

    }
    return 1;
}

    //int pop();
    //int peek();
    //int displayStack(); 
