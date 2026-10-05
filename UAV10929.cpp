#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    long long even = 0, odd = 0, num = 0;
    while (cin >> x)
    {
        even = 0;
        odd = 0;
        num = 0;
        if (x == "0")
        {
            break;
        }
        for (int i = 0; i < x.size() - 1; i += 2)
        {
            even += x[i] - '0';
            odd += x[i + 1] - '0';
        }
        if (x.size() % 2 != 0)
        {
            even += x[x.size() - 1] - '0';
        }
        num = even - odd;
        if (num % 11 == 0)
        {
            cout << x << " is a multiple of 11.\n";
        }
        else
        {
            cout << x << " is not a multiple of 11.\n";
        }
    }
}
