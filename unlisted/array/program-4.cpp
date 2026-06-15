// find the even and odd numbers from array
#include <iostream>
using namespace std;

int main()
{
    int elements[] = {3, 8, 15, 22, 7, 10, 6};
    int size = sizeof(elements) / sizeof(elements[0]);

    // find the even and odd number
    for (int i = 0; i < size; i++)
    {
        if (elements[i] % 2 == 0)
            cout << elements[i] << " is even" << endl;
        else
            cout << elements[i] << " is odd" << endl;
    }
    return 0;
}