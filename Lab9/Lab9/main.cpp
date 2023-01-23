// Sarah Mueller snm186
// November 2, 2020
//CS1428 Lab
//Lab 9
//Description: this program will track run distances for the user
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 7; //number of days
    const string WEEK[] = {"Sunday",
                           "Monday",
                           "Tuesday",
                           "Wednesday",
                           "Thursday",
                           "Friday",
                           "Saturday"};

    double distances[SIZE];
    double total = 0,
           average;
    int shortest_index = 0;

    cout << "Please enter the distance run." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //double distance;
        cout << WEEK[i] << "  : ";
        cin >> distances[i];
        //distances[i] = distance;
    }

    for(int j = 0; j < SIZE; j++){
        total = total + distances[j];
        }
    average = total / SIZE;
    
    int smallVal = distances[0];
    for(int i = 0; i < SIZE; i++){
        if(distances[i] < smallVal){
            smallVal = distances[i];
            shortest_index = i;
        }
    }



    cout << fixed << setprecision(2)
         << "Total distance  : " << total << endl
         << "Average distance : " << average << endl
         << "Shortest distance : " << distances[shortest_index] << " miles on " << WEEK[shortest_index] << endl;

    return 0;
}
