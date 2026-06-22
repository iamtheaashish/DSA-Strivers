#include <bits/stdc++.h>
using namespace std;

void f(int i, int N)
{
    if (i > N)
        return;

    cout << "Aashish" << endl;
    f(i + 1, N);
}

int main()
{
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    f(1, N);

    return 0;
}