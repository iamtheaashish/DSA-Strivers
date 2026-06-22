#include <bits/stdc++.h>
using namespace std;

void f(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }

    f(i - 1, sum + i);
}

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    f(N, 0);

    return 0;
}