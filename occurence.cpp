#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[9] = {12, 34, 55, 55, 55, 55, 78, 89, 99};
    cout << "First occurence of 55 is at index " << firstocc(arr, 9, 55) << endl;
    cout << "Last occurence of 55 is at index " << lastocc(arr, 9, 55) << endl;
    int totalocc = (lastocc(arr, 9, 55) - firstocc(arr, 9, 55)) + 1;
    cout << "Total number of occurence of 55 is " << totalocc;
    return 0;
}