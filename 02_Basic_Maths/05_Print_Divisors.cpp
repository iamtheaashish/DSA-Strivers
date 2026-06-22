#include <bits/stdc++.h>
using namespace std;

void printDivisors(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            cout << i << endl;
    }
}

void printDivisorsBetter(int number)
{
    vector<int> divisors;

    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            divisors.push_back(i);

            if ((number / i) != i)
                divisors.push_back(number / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int divisor : divisors)
    {
        cout << divisor << endl;
    }
}

int main()
{
    int number;
    cin >> number;

    void (*divisor)(int) = printDivisorsBetter;
    divisor(number);

    return 0;
}