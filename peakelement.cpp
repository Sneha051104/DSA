#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[s];
}
int main(){
int arr[5]={0,3,5,2,1};
int ans=peakelement(arr,5);
cout<<"Peak element of the array is "<<ans;
return 0;
}