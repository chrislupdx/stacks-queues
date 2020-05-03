//Chris
//Program #2
//CS 163
//Address.h

//This is the implementation of the struct address, the nodes
//used by the circular linked list data structure that the 
//queue 

struct address
{
    address(); 
    ~address(); //This is the default destructor for the address node
    //peakAssist? //still not sure how to do peek
    
    char * addressStr;       //probably a dynamic array;
    address * next;       //a next pointer
};
