//Sarah Mueller snm186
//November 16, 2020
//CS1428 Lab
//Lab 11
//Description: this program will track a small library

#include <iostream>
#include <iomanip>

using namespace std;

struct Book{
    string title;
    int pubYear;
    int numPages;
    int numCopies;
};

int main()
{
    const int SIZE = 3;
    Book books[SIZE];
    int total = 0,
        longestIndex = 0,
        oldestIndex = 0;

    for(int i = 0; i < SIZE; i++)
    {
        cout << "Book #" << (i+1) << endl << "Enter title: ";
        cin >> books[i].title;
        cout << "Enter publishing year: ";
        cin >> books[i].pubYear;
        cout << "Enter number of pages: ";
        cin >> books[i].numPages;
        cout << "Enter number of copies: ";
        cin >> books[i].numCopies;
    }

    for(int i = 0; i < SIZE; i++){
        total += books[i].numCopies;
        
        if(books[longestIndex].numPages < books[i].numPages){
            longestIndex = i;
        }
        if(books[oldestIndex].pubYear > books[i].pubYear){
            oldestIndex = i;
        }
        cout << endl << endl;
    }

    cout << "Total number of books   : " << total << endl;
    cout << "Oldest book             : " << books[oldestIndex].title << endl;
    cout << "Longest book            : " << books[longestIndex].title << endl;
    return 0;
}


