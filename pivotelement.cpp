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
    return arr[s];
}
int main(){
    int arr[]={7,9,1,2,3};
    cout<<"Pivot element of array is "<<pivotelement(arr,5);

return 0;
}