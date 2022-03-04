// Given an array of nonnegative integers, design a linear algorithm and implement it using a program
//  to find whether a given key element is present in the array or not.
// Also, find the total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
//  C++ code to linearly search x in arr[]. If x
//  is present then return its location, otherwise
//  return -1

#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int to_find = 0;
    cin >> to_find;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == to_find)
        {
            cout << to_find << " found and no of comparisons were " << i << endl;
            return;
        }
        if (i == n - 1)
        {
            cout << "Not found" << endl;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}