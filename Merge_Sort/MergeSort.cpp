#include <iostream>
#include<vector>
using namespace std;
void MergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}
void Merge(int arr[], int low, int mid, int high)
{
    vector<int>res;
    int left = low;
    int right = mid+1;
    while(left <=mid && right <=high){
        if(arr[left] <= arr[right]){
            res.push_back(arr[left]);
            left++;
        }
        else{
            res.push_back(arr[right]);
            right++;
        }
    }
    while (left <=mid)
    {
        res.push_back(arr[left]);
        left++;
    }
        while (right <=high)
    {
        res.push_back(arr[left]);
        right++;
    }
    for(int i=low;i<high;i++){
        arr[i]=res[i-low];
    }
}
int main()
{
    int arr[] = {1, 2, 2, 9, 1, 5, 6, 12};
    int low = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int high = size;
    MergeSort(arr, low, high);
}