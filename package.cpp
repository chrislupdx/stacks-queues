//Chris
//Program #2
//package.cpp

//This is the implementation of the struct, packNode. packNode
//represents a single package.  
//used in a linear linked list of arrays. This array of nodes
//will be housed in a listNode struct
//be the same length
#include "package.h"
#include <cstring>
#include <iostream> //huh

//This is the default constructor
package::package()
{
    sender = nullptr;
    id = 0; //this one isn't going to play nice
    deliveryInfo = nullptr;
};

//This is the default destructor
package::~package()
{
    if(sender)
        delete [] sender;
    if(id)
        id = 0;
    if(deliveryInfo)
        delete [] deliveryInfo;
}

//Takes in parms and fills in the struct's valus
int package::create(int id_toadd, char * sender_toadd, char * deliveryInfo_toadd)
{
    if(!id_toadd || !sender_toadd || !deliveryInfo_toadd) return 0;
    
    sender = new char[strlen(sender_toadd) + 1];
    strcpy(sender, sender_toadd);
    
    deliveryInfo = new char [strlen(deliveryInfo_toadd) + 1];
    strcpy(deliveryInfo, deliveryInfo_toadd); 
   
    id = id_toadd;


return 1;
}

//couts package info
int package::display()
{
    std::cout << "id: " << this->id << std::endl;
    std::cout << "sender: " << this->sender << std::endl;
    std::cout << "delivery: " << this->deliveryInfo << std::endl;

    return 1;
}


//destroy
//displayj
//copypackNode()

//char * sender;
//int id;
//char * deliveryInfo;
