#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
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
int main(){
int n=7;
int arr[]={11,22,33,44,55,66,77};
int key=44;
int result=binarysearch(arr,n,key);
cout<<"element is"<<result;
return 0;
}