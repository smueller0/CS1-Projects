// Sarah Mueller snm186
// October 12, 2020
//CS1428 Lab
//Lab 6
//Description: this program will print n even or odd numbers
#include <iostream>
using namespace std;
int main(){
    int choice;
    int N;
    int counter;
    // Prompt the user for their choice:
    cout << "What would you like to do?\n"
    << "1. Find even numbers 0 - N\n"
    << "2. Find odd numbers 0 - N\n"
    << "3. Quit program\n"
    << "Enter your choice: ";
    
    cin >> choice;
    
    while ( choice != 3 ){
        if(choice==1){
            cout << "Enter number N: \n";
            cin >> N;
            counter = 0;
            while(counter <= N){
                cout << counter << " ";
                    counter = counter + 2;
                }
            cout << endl;
        }
        else if(choice == 2){
            cout << "Enter number N: \n";
            cin >> N;
            counter = 1;
            while (counter <= N){
                cout << counter << " ";
                counter = counter + 2;
        }
            cout << endl;}
        else{
            cout << "ERROR: Invalid choice. Select a valid menu item. \n";
        }
            cout << "What would you like to do?\n"
            << "1. Find even numbers 0 - N\n"
            << "2. Find odd numbers 0 - N\n"
            << "3. Quit program\n"
            << "Enter your choice: ";
            
            cin >> choice;
    
    }
    
    cout << "Terminating program...\n";
    
    /*while ( choice ==1){
    
        cout << endl;
        cout << "What would you like to do?\n"
        << "1. Find even numbers 0 - N\n"
        << "2. Find odd numbers 0 - N\n"
        << "3. Quit program\n"
        << "Enter your choice: ";
        
        cin >> choice;
    }
    do{
        
        }
        
        cout << "What would you like to do?\n"
        << "1. Find even numbers 0 - N\n"
        << "2. Find odd numbers 0 - N\n"
        << "3. Quit program\n"
        << "Enter your choice: ";
        
        cin >> choice;
    } while(choice == 2);
   while(choice == 0 && choice > 3){
        
    }
    
    while ( choice == 3 ){
           cout << "Terminating program...\n";
    }*/
    
    return 0;
    
}
