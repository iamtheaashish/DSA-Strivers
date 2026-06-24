#include "../dsa.hpp"
using namespace std;

void PrintPattern(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    PrintPattern(n);

    return 0;
}