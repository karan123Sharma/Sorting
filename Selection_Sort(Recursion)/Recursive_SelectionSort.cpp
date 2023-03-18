#include<iostream>
using namespace std;
void Selection_Sort(int arr[],int a ){

    for(int i=0;i<a;i++){
        int min = i;
            if(arr[i]<arr[min]){
                swap(arr[i],arr[min]);
            }
    }
    Selection_Sort(arr,a-1);
}
int main(){
    int arr[]={9,1,6,2,3};
    int a= sizeof(arr)/sizeof(arr[0]);
    Selection_Sort(arr,a);
    for(auto i:arr){
        cout<<i<<" ";
    }

}