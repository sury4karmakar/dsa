// reverse an array
#include <iostream>
using namespace std;

int main()
{
    int total_element, temp;

    cout << "enter the number of element";
    cin >> total_element;

    // input elements into array
    int elements[total_element];
    for (int i = 0; i < total_element; i++)
    {
        cin >> elements[i];
    }

    // reverse an array
    for (int i = 0; i < total_element / 2; i++)
    {
        temp = elements[i];
        elements[i] = elements[total_element - i - 1];
        elements[total_element - i - 1] = temp;
    }

    // display the output
    for (int i = 0; i < total_element; i++)
    {
        cout << elements[i];
    }

    return 0;
}