#include<iostream>
using namespace std;
int selectionsort(int arr[],int n){
    for(int i=0;i < n-1 ; i++){
        int min=i;
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"Sorted array is : ";
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
  return 0;
}
int main(){
    int arr[]={45,23,80,46,21,14,78};
    int n=7;
    int ans =selectionsort(arr,n);
    
return 0;
}