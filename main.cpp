//This is main!
//
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
    queue queue;
    char address[20];
    int choice;
    cout << "Programming assingment #2"
        << endl << "#1: Create an address:"
        << endl << "0 to Exit" << endl;
        cin >> choice;
        cin.ignore(100, '\n'); 
   do{
        if(choice == 1)
        {
            cout << "#1: Create a address" << endl;
            cout << "address name:";
            cin.get(address, 20, '\n');
            cin.ignore(100, '\n');
        }

   }
   while(choice != 0);
   cout << "Exiting" << endl;
    return 1;
}
