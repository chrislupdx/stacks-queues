//Chris
//Program #2
//package.h

//This is the implementation of the struct, packNode. packNode
//represents a single package.  
//used in a linear linked list of arrays. This array of nodes
//will be housed in a listNode struct
//be the same length

struct package
{
     package();
    ~package();
   
    int create(int id, char * sender, char * deliveryInfo);
    //new char strlen//strcpy
    
    //destroy
    int display();
    //copypackNode() //copy the parm or?
    
    char * sender;
    int id;
    char * deliveryInfo;
};
