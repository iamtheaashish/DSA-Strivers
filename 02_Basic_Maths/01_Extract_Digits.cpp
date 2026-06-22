#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int cnt = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        cnt++;
        n /= 10;
    }

    return cnt;
}

int main()
{
    cout << "Count of digit is equal to " << countDigits(156) << "." << endl;
    return 0;
}