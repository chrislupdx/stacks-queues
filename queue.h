//Chris Lu
//Project #2
//Queue.h
//This is the implementation of the .h file for a queue of addresses. The
//data structure beneath this ADT is a circular linked list of struct nodes 
//na

#include "address.h"
//#include <cstddef>
//using namespace std;
class queue
{
    public:
    queue(); //This is the default constructor.
	~queue(); //This is the default destructor;
    int deleteAll(address *& rear); //Recursive delete all 

    //will need to accomodate queueNode Structs
    int enqueue(const address &); //This function puts data 
                                    //into the rear of the queue.


    //will need to accomdate queueNode structs 
    int dequeue(address &);         //This function removes data 
                                    //off the front of the queue.
                                    //Address is a copy of the item dq-ed
    int peek(address &);      //Returns the top of the queue by reference
	int displayQueue();           //Hopefully it prints from 
    int displayAll(address * rear);    
    //int copyAddress(address & address_toadd);    

    private:
	address * rear; 
};
