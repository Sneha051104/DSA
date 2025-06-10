#include<iostream>
using namespace std;
int sqrt(int n){
    int s=0;
    int e=n-1;
    int mid = s+ (e-s)/2;
    int ans;
     while(s<=e){
        if(mid * mid == n){
            return mid;
        }
        else if(mid*mid >= n){
            e=mid-1;
        }
        else if(mid * mid <= n ){
            ans = mid;
            s=mid+1;
        }
        mid = s+ (e-s)/2;
    }
     return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int k=10000;
    int result = sqrt(k);
    cout<<"Square root of element "<< k <<" is "<<result<<endl;
return 0;
}