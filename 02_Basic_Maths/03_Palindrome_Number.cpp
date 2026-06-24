#include "../dsa.hpp"
using namespace std;

bool isPalindrome(int revNumber, int originalNumber)
{
    return revNumber == originalNumber;
}

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
    cout << "Is the number palindrome: "
         << (isPalindrome(revNumber, originalNumber) ? "true" : "false")
         << endl;

    return 0;
}