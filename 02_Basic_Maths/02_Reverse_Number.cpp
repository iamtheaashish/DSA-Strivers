#include <bits/stdc++.h>
using namespace std;

int main()
{
    int originalNumber;
    cin >> originalNumber;

    int n = originalNumber;
    int revNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        revNumber = (revNumber * 10) + lastDigit;
        n = n / 10;
    }

    cout << revNumber << endl;

    return 0;
}