#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 1, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                swap(arr[j], arr[min]);
            }
        }
    }
    cout << "Ascending Order :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << "Descending Order :";
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}