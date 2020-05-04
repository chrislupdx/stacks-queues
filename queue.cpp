//Chris Lu
//Project #2
//Queue.cpp
//This is the implementation of the .cpp file for a queue of addresses. The
//data structure beneath this ADT is a circular linked list of struct nodes .
#include "queue.h"

    //This is the default constructor
    queue::queue()
    {
    rear = nullptr; //not sure 
    };
    
   queue::~queue()
   {
    if(rear) //this is segfaulting
    {
        address * temp = rear;  
        rear=rear->next;
        delete temp; //not sure the order
    } 
       //recursively advance here
   }; //This is the default destructor; //do we want it to be a wrapper?
  
    /* This is a Queue: 
     * (rear) -------- > (front)
     */

    //This function puts data onto the rear of the queue
    int queue::enqueue(const address & address_toadd ) //This function puts data into the rear of the queue.
    {
    //Guard Case: Is full ?
        
    //copy address_toadd into temp
    address * temp = new address;                   
    temp->addressStr = address_toadd.addressStr;        //make a new node + copy the parm into it
 
    //Case 1: Empty Queue (if null)
    if(rear == nullptr)//how else to say if its empty
    {
        rear = temp; 
        rear->next = rear;
    }
    
    //Case 2: 1 item (in the event it points to itself)
    else if(rear->next == rear) 
    {   
        temp->next = rear;
        rear->next = temp;
    }
    //Case 3: More items (+1)
    else 
    {
        address * hold = rear->next; //hold onto  the end
        rear->next = new address; //create a new node
        rear = rear->next; //move to the new node
        rear->next = hold; //
    }
    
    return 1;
    }

    //returns 1 if empty 0 if not
    int queue::isEmpty()
    {
    if(rear == nullptr ) //is that the only condition
        {
        return 1;
        }
    else
    {
        return 0; //else
    }
    }
//int dequeue(const address &); //This function removes data 
//off the front of the queue.
//isEmpty();                //Returns 1 if the queue is empty.
//isFull();                 //Returns 1 if the queue is full.
//int peek(address &);      //Returns the top of the queue by reference
//int displayQueue();           //Hopefully it prints from 
