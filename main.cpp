//This is main!
//
#include "queue.h"
#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
    queue address_queue;
    address new_address;
    char address[20];
    int choice;
    cout << "Programming assingment #2"
        << endl << "#1: Add an address to the end of the delivery list:"
        << endl << "#2: Remove an address from the front of the delivery list:"
        << endl << "0 to Exit" << endl;
        cin >> choice;
        cin.ignore(100, '\n'); 
   do{
        if(choice == 1)
        {
            cout << "#1: Add an address to the delivery list" << endl;
            cout << "address name:";
            cin.get(address, 20, '\n');
            cin.ignore(100, '\n');
            new_address.addressStr = address; //the customer still isn't handling nodes directly
            address_queue.enqueue(new_address); 
   
            cout << "Programming assingment #2"
            << endl << "#1: Add another address:"
            << endl << "#2: Remove an address from the delivery list:"
            << endl << "0 to Exit" << endl;
            cin >> choice;
            cin.ignore(100, '\n');
            cout << endl;
            //(inifinite loop if we pick choice1 inside choice 1)
        }
        //if(choice == 2) //probs should be dequeue
        //{
        //    cout << "#2: Remove an address from the front of the delivery list:"
        //    
        //}


   }
   while(choice != 0);
   cout << "Exiting" << endl;
    return 1;
}
