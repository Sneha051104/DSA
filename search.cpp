#include<iostream>
using namespace std;
int pivotelement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2; 

    }
    return -1;
}
int search(int arr[],int n, int k){
    int pivot = pivotelement(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarysearch(arr , pivot , n-1 , k);
    }
    else{
        return binarysearch(arr , 0 , pivot-1 , k);
    }
}
int main(){
    int arr[] = {7,9,1,2,3};
    int k = 2;
    int result = search(arr,5,k);
    if(result != -1){
         cout<<"Element "<< k <<" found at index "<< result <<endl;
    }
    else{
        cout<<"Element "<< k <<" Is not found "<<endl;
    }

return 0;
}