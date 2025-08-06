// liner search
#include <iostream>
using namespace std;

int main()
{
    int total_element, search_element, index = -1;

    cout << "enter the number of element";
    cin >> total_element;

    // input elements into array
    int elements[total_element];
    for (int i = 0; i < total_element; i++)
    {
        cin >> elements[i];
    }

    cout << "enter the elemet to search";
    cin >> search_element;

    // liner search to find the element
    for (int i = 0; i < total_element; i++)
    {
        if (search_element == elements[i])
        {
            index = i;
            break;
        }
    }

    // display the output
    if (index == -1)
        cout << "element not found";
    else
        cout << "element found at " << index;

    return 0;
}
