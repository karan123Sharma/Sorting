#include<iostream>
using namespace std;
void bubble_sort(int arr[],int a){
    if(a==1){
        return;
    }
    for(int i=0;i<a;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
     bubble_sort(arr,a-1);
}
int main(){
    int arr[]={4,1,9,2,8};
    int a = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,a);
    for(auto i:arr){
        cout<<i<<" ";
    }

}