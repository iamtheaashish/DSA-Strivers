#include <bits/stdc++.h>
using namespace std;

void f(vector<int>& a, int l, int r)
{
    if (l >= r)
        return;

    swap(a[l], a[r]);

    f(a, l + 1, r - 1);
}

int main()
{
    vector<int> arr = {4, 2, 6, 8, 1, 9, 0, 7, 0};

    f(arr, 0, arr.size() - 1);

    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}