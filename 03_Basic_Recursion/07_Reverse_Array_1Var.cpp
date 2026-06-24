#include "../dsa.hpp"
using namespace std;

void f(vector<int>& a, int i)
{
    if (i >= a.size() / 2)
        return;

    swap(a[i], a[a.size() - i - 1]);

    f(a, i + 1);
}

int main()
{
    vector<int> arr = {4, 2, 6, 8, 1, 9, 0, 7, 0};

    f(arr, 0);

    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}