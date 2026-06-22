#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int armstrongNumber, int originalNumber)
{
    return armstrongNumber == originalNumber;
}

int main()
{
    int originalNumber;
    cin >> originalNumber;

    int n = originalNumber;
    int armstrongNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        armstrongNumber += lastDigit * lastDigit * lastDigit;
        n /= 10;
    }

    cout << "Is the originalNumber armstrong? "
         << (isArmstrong(armstrongNumber, originalNumber) ? "true" : "false")
         << endl;

    return 0;
}