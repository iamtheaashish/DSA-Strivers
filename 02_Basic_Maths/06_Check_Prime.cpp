#include "../dsa.hpp"
using namespace std;

int main()
{
    int number;
    cin >> number;

    int count = 0;

    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;

            if ((number / i) != i)
                count++;
        }
    }

    if (count == 2)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}