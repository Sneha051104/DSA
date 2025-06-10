#include<iostream>
using namespace std;
int insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            
            if(arr[j]>temp){               
               arr[j+1]=arr[j];
            }
           else{
            break;
           }
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted array is : ";
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
    return 0;
}
int main(){
    int arr[]={10,1,7,4,8,2,11};
    insertionsort(arr,7);
return 0;
}