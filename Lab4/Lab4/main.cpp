// Sarah Mueller snm186
// September 28th 2020
//CS1428 Lab
//Lab 4
//Description: this a simple 4-function calculator

#include <iostream>
using namespace std;

int main()
{
    char operation;  //user's choice of operation
    double first_num, second_num, //user's choice of real numbers
           result;

    // Display greeting:
    cout << "Welcome to my super deluxe calculator 2000!\n";

    // Get user input:
    cout << "Enter the first number\n";
    cin >> first_num;

    cout << "Enter the desired operation (+ - * /)\n";
    cin >> operation;

    cout << "Enter the second number\n";
    cin >> second_num;


    switch(operation){
        case '+':
            result = first_num + second_num;
            cout << first_num << " + " << second_num << " = " << result << endl;
            break;
            
        case '-':
            result = first_num - second_num;
            cout << first_num << " - " << second_num << " = " << result << endl;
            break;
        
        case '*':
            result = first_num * second_num;
            cout << first_num << " * " << second_num << " = " << result << endl;
            break;
            
        case '/':
            if(second_num == 0){
                cout << "Error : Divide by zero" << endl;
            }
            else{
            result = first_num / second_num;
            cout << first_num << " / " << second_num << " = " << result << endl;
            }
            break;
    
            
        default:
            cout << "ERROR : Invalid operator" << endl;
            break;
            
}
    // Exit the program:
    return 0;
}
