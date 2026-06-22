#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 1)
        return 1;

    return n * f(n - 1);
}

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    cout << f(N) << endl;

    return 0;
}