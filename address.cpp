//Chris Lu
//Program #2
//CS 163
//Address.cpp

//This is the implementation of the struct, address. 
//These are the nodes of the CLL used by queue.  Functions here include
//the constructor, destructor.  As this is a struct, setters and getter might not be necessary

#include "address.h"
#include <cstring>
//This is the defaeult constructor for the CLL ndoes (named address).
//We set the next to NULL and the data to empty
address::address()
{
    addressStr = nullptr; 
    next = nullptr;
}; //This is the default constructor for the address node


//This is the default destructor for the CLL nodes.
address::~address()
{
    if(addressStr)
        delete [] addressStr; //delete [] didnt work
}

//This is a copyassignment operator returns 1 on success
int address::copyAddress(const address & address_toadd)
{  
    if(!address_toadd.addressStr) return 0;
    if(this->addressStr) delete [] this->addressStr;
    addressStr = new char[strlen(address_toadd.addressStr) + 1];
    strcpy(addressStr, address_toadd.addressStr);
    return 1;
}



