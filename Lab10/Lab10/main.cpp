// Sarah Mueller snm186
// November 9, 2020
//CS1428 Lab
//Lab 10
//Description: this program will apply a curve to 5 grades

#include <iostream>
#include <iomanip>
using namespace std;

double getAverage(double g[], const int SIZE)
{
    double total = 0;

    for(int i = 0; i < SIZE; i++)
    {
        total += g[i];
    }

    return total/SIZE;
}

void applyCurve(double g[], const int SIZE, double curve)
{
    for(int i = 0; i < SIZE; i++)
    {
        g[i] += curve;
    }
}

void findCurveInfo(double g[], const int SIZE, int &highest, double &curve){
    highest = 0;
    for(int i = 1; i < SIZE; i++){
        if(g[i] > g[i-1]){
            highest = i;
        }
    }
    curve = (100.0 - g[highest])/2.0;
}
void printData(double g[], const int SIZE, int highest, double average, double curve){
    cout << "Grades after curve:" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << g[i] << endl;
    }
    cout << "Average after curve: " << average << endl;
    cout << "Highest grade after curve: " << g[highest] << endl;
    cout << "Curve amount applied: " << curve << endl;
}


int main()
{
    const int SIZE = 5;
    int highest;
    double average,
           curve,
           grades[SIZE];

    cout << "Enter " << SIZE << " grades: " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> grades[i];
    }

    findCurveInfo(grades, SIZE, highest, curve);
    applyCurve(grades, SIZE, curve);
    average = getAverage(grades, SIZE);
    printData(grades, SIZE, highest, average, curve);

    return 0;
}


