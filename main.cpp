//This is main!
#include "queue.h"
#include "stack.h"
#include <cstring>
int main()
{
    //stack stack;
    queue address_queue;
    address new_address; //double free error
    address delAddress;
    address peekAdd;
    char addressName[20];
    int choice;
    cout << "Programming assingment #2"
        << endl << "#1: Add an address to the end of the delivery list:"
        << endl << "#2: Remove an address from the front of the delivery list:"
        << endl << "0 to Exit" << endl;
        cout << "pick another option: " << endl; 
        cin >> choice;
        cin.ignore(100, '\n'); 
   do{
        if(choice == 1)
        {
            cout << "#1: Add an address to the delivery list" << endl;
            cout << "address name:";
            cin.get(addressName, 20, '\n');
            cin.ignore(100, '\n');
            new_address.addressStr = new char(strlen(addressName) + 1);
            strcpy(new_address.addressStr, addressName);
            //new_address.addressStr = addressName; //the customer still isn't handling nodes directly
            //populate a package struct -> as 2nd arg into enqueueue
            
            address_queue.enqueue(new_address); 
            cout << "The queue: " << address_queue.displayQueue(); 
            cout << "Front of the queue: " << address_queue.peek(peekAdd) << endl;
            cout << endl << "#1: Add another address:"
            << endl << "#2: Remove an address from the delivery list:"
            << endl << "0 to Exit" << endl;
            
            //address_queue.peek(peekAdd); 
           
            cout << "pick another option: " << endl;
            cin >> choice;
            cin.ignore(100, '\n'); //AQUI
            cout << endl;
        }
        else if(choice == 2) //probs should be dequeue
        {
            cout << "#2: Remove an address from the front of the delivery list:" << endl;
            //address delAddress; //the address default construct borks here
            
            address_queue.dequeue(delAddress);
            cout << "Deleted " << delAddress.addressStr << endl;
            cout << "The queue: " << address_queue.displayQueue()
            cout << "Front of the queue: " << address_queue.peek(peekAdd) << endl 
            << endl << "#1: Add another address:"
            << endl << "#2: Remove an address from the delivery list:"
            << endl << "0 to Exit" << endl;
            
            cin >> choice;
            cin.ignore(100, '\n');
        }
   }
   while(choice != 0);
   cout << "Exiting" << endl;
    return 1;
}
