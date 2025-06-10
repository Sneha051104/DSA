#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int k, int mid)
{
    int painter = 1;
    int area = 0;
    for (int i = 0; i < n; i++)
    {
        if (area + arr[i] <= mid)
        {
            area += arr[i];
        }
        else
        {
            painter++;
            if (painter > k || arr[i] > mid)
            {
                return false;
            }
            area = 0;
            area += arr[i];
        }
    }
    return true;
}
int painterspartition(int arr[], int n, int k)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {10, 10, 10, 10};
    int result = painterspartition(arr, 4, 2);
    cout << "Painters partition result is " << result;

    return 0;
}