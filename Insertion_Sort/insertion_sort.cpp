#include<iostream>
using namespace std;
int main(){
    int a[]={3,1,9,6,8};
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size-1;i++){
        int j=i;
        while (j>0 && a[j-1] > a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
        
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    }