#include <bits/stdc++.h>
using namespace std;

void f(int N, int i)
{
    if (N < i)
        return;

    cout << N << endl;
    f(N - 1, i);
}

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    f(N, 1);

    return 0;
}