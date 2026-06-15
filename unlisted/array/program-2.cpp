// find largest element in array
#include <iostream>
using namespace std;

int main()
{
    int total_element, largest_element;

    cout << "enter the number of element";
    cin >> total_element;

    // input elements into array
    int elements[total_element];
    for (int i = 0; i < total_element; i++)
    {
        cin >> elements[i];
    }

    // find the largest element
    largest_element = elements[0];
    for (int i = 1; i < total_element; i++)
    {
        if (elements[i] > largest_element)
        {
            largest_element = elements[i];
        }
    }

    // display the output
    cout << "the largest element in the array is " << largest_element;

    return 0;
}