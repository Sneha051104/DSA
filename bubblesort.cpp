#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
    bool swapped = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
    cout<<"Sorted array is : ";
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
    return 0;
}

int main(){
    int arr[]={10,1,7,6,14,9};
    bubblesort(arr,6);
return 0;
}