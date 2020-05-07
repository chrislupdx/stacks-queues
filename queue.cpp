//P> 
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
}

queue::~queue()
{
    if(!rear) return;
    address * thing = rear->next;
    rear->next = NULL;
    deleteAll(thing);

} //This is the default destructor; //do we want it to be a wrapper?

int queue::deleteAll(address *& rear)
{
    if(!rear) return 1;
    //otw
    if(rear)
    {
        address * temp = rear->next;
        delete rear;
        rear = temp;
    }

    deleteAll(rear);
    //return home

    return 1;
}


/* This is a Queue: 
 * (rear) -------- > (front)
 */

//recieve a package by reference
//
//This function puts data onto the rear of the queue
int queue::enqueue(const address & address_toadd ) //This function puts data into the rear of the queue.
{
    //if(isEmpty()) std::cout << "Is empty" << std::endl;
    //copy address_toadd into temp
    //Case 1: Empty Queue (if null)
    if(rear == nullptr)//how else to say if its empty
    {
        rear = new address;
        rear->copyAddress(address_toadd); //make this nice
        rear->next = rear;
        return 1; // for success!     
    }

    //Case 2: 1 item (in the event it points to itself)
    else if(rear->next == rear) //NEEDS CHECKING
    {   
        address * temp = new address; 
        temp->next = rear->next;
        rear->next = temp;
        rear = temp; 
        temp->copyAddress(address_toadd); 
        return 1; 
    }

    //Case 3: More items (+1)
    else //NEEDS CHECKIN
    {
        address * hold = new address; 
        hold->next = rear->next; //create a new node
        rear->next = hold; //move to the new nodehh
        hold->copyAddress(address_toadd); 
        rear = hold; 
        return 1;
    }
    return 0;
}

//remove the
int queue::dequeue(address & dequeueed)
{
    if(rear == nullptr) //can't remove empty
    {
        std::cout << "empty"; 
        return 0;
    }
    // c2: if one: dequeue the one
    else if(rear->next == rear)
    {
        dequeueed.copyAddress(*rear);
        delete rear; 
        rear = nullptr;
    }
    // c3: if n+1 nodes
    else
    {
        dequeueed.copyAddress(*rear->next);
        address * temp = rear->next->next;
        delete rear->next; //this delete isn't correct?
        rear->next = temp;
    }
    return 1;
}

//Returns the front of the queue by reference
int queue::peek(address & peak)
{
    //c1 it's empty
    if(rear == nullptr)
    {
        std::cout << "empty";
        return 0;
    }
    //c2 only 1
    else if (rear->next == rear)
    {
        char * frontAddress = rear->addressStr;
        peak.addressStr = frontAddress;
        std::cout<<peak.addressStr<<endl;
        return 1;
    }
    //c3 +1 
    else
    {  
        char * frontAddress = rear->next->addressStr;
        peak.addressStr = frontAddress;
        std::cout<<peak.addressStr<<endl;
        return 1;
    } 
    return 1;
}

int queue::displayAll(address * rear)
{
    if(this->rear == rear) return 0; 
    std::cout << "DISPLAYALL" << endl; 
    std::cout << rear->addressStr << "," ;
    displayAll(rear->next);
    return 1;
}

//Display the entire list
int queue::displayQueue()
{

    if(rear == nullptr)
    {
        std::cout << "empty";
        return 0; 
    }
    //else if (rear->next == rear)
    //{
    //    std::cout << rear->addressStr << endl; 
    //    return 1; 
    //}
    std::cout << rear->addressStr;
        displayAll(rear->next);
        return 1;
}


