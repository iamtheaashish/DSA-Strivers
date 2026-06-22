#include <bits/stdc++.h>
using namespace std;

bool f(string s, int l, int r)
{
    if (l >= r)
        return true;

    if (s[l] != s[r])
        return false;

    return f(s, l + 1, r - 1);
}

int main()
{
    string input;

    cout << "Enter a string: ";
    cin >> input;

    cout << "Is the string a palindrome? : "
         << (f(input, 0, input.length() - 1) ? "true" : "false")
         << endl;

    return 0;
}