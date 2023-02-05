#include <iostream>
using namespace std;

#define SIZE 50

int main()
{
    int array[SIZE];
    int i, max, min, size;
    cout << "Enter size of the array: ";
    cin >> size;
    cout << "\nEnter " << size << " elements in the array: ";
    for (i = 0; i < size; i++)
        cin >> array[i];
    max = array[0];
    min = array[0];
    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }
    cout << "\nMaximum element =" << max << "\n";
    cout << "Minimum element =" << min;

    return 0;
}