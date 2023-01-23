//Sarah Mueller snm186
//October 5 2020
//CS1428 Lab
//Lab 5
//Description: this program will print the first n factorials

#include <iostream>
using namespace std;

int main() {

    int num,
        factorial = 1;

    // Prompt the user for a number:
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << endl;
    
    if(num > 0 && num <= 12){
        cout << "!" << num << " = ";
    for(int i = 1; i < num; i++){
        factorial = i * factorial;
        cout << i << " * " ;
    }
        factorial = num * factorial;
        cout << num << " = " << factorial << endl;
    }
    else if (num == 0){
        cout << "!" << num << " = " << factorial << endl;
    }
    else{
        cout << "ERROR: Valid numbers are 0 to 12"<< endl;
    }
    return 0;
}
