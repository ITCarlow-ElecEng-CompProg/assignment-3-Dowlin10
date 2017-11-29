// Mark Dowling
// C00216994
// 20/9/17
// Lab 3
#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[], int);

int main(void)
{
    /**< variable declarations */
    int i;
    float data[10];

    cout << "Enter 10 elements: ";
    for(i = 0; i < 10; ++i)
    {
        cin >> data[i];
    }

    cout << "Standard Deviation = : \n" << calculateSD(data, 1) << endl;
    cout << "Mean = " << calculateSD(data, 0) << endl;

    return 0;
}

float calculateSD(float data[], int n)
{
    /**< variable declarations */

    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i = 0; i < 10; ++i)
    {
        sum += data[i];   // sum = sum + data[i];
    }

    mean = sum/10;  // sum/ number of values

    for(i = 0; i < 10; ++i)
    {
        standardDeviation += pow(data[i] - mean, 2); // Squaring the data[i] - arithmatic mean
    }

    if (n == 0)
        return mean;
    else
        return sqrt(standardDeviation / 9); // getting the square root of the (data[i] - arithmatic mean)^2 / 9
}
