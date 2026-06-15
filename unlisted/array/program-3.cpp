// calculate sum and average of array elements
#include <iostream>
using namespace std;

int main()
{
    int total_element, sum = 0;

    cout << "enter the number of element";
    cin >> total_element;

    // input elements into array
    int elements[total_element];
    for (int i = 0; i < total_element; i++)
    {
        cin >> elements[i];
    }

    // calculate the sum
    for (int i = 0; i < total_element; i++)
        sum = sum + elements[i];

    // calculate the average
    double average = (double)sum / total_element;

    // display the output
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}