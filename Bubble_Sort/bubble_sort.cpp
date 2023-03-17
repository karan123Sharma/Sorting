#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
    cout << "Descending order :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Ascending order :";
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}