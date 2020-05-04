//Chris Lu
//Project #2
//Queue.h
//This is the implementation of the .h file for a queue of addresses. The
//data structure beneath this ADT is a circular linked list of struct nodes 
//na

#include "address.h"

class queue
{
    public:
    queue(); //This is the default constructor.
	~queue(); //This is the default destructor;
	
    int enqueue(const address &); //This function puts data 
                                    //into the rear of the queue.
	
    //int dequeue(const address &); //This function removes data 
                                    //off the front of the queue.
	
    int isEmpty();                //Returns 1 if the queue is empty.
	//isFull();                 //Returns 1 if the queue is full.
    
    //int peek(address &);      //Returns the top of the queue by reference
	//int displayQueue();           //Hopefully it prints from 
    
    private:
	address * rear; 
};
