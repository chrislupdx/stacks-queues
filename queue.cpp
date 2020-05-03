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
    if(rear->next != nullptr)
    {
        address * temp = rear;
        rear=rear->next;
        
    } 

   }; //This is the default destructor;
    
    int enqueue(const address &); //This function puts data 
                                    //into the rear of the queue.
   
    //int dequeue(const address &); //This function removes data 
                                    //off the front of the queue.
    //isEmpty();                //Returns 1 if the queue is empty.
	//isFull();                 //Returns 1 if the queue is full.
    //int peek(address &);      //Returns the top of the queue by reference
	//int displayQueue();           //Hopefully it prints from 
