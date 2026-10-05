#include <bits/stdc++.h>

using namespace std;

int fun(long long n)
{
    int tot = 1;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }
        tot++;
    }
    return tot;
}

int main()
{
    long long a, b;
    int max = 0, tmp;
    while (cin >> a >> b)
    {
        cout << a << " " << b << " ";
        if (a > b)
            swap(a, b);
        max = 0;
        for (long long i = a; i <= b; i++)
        {
            tmp = fun(i);
            if (tmp > max)
            {
                max = tmp;
            }
        }
        cout << max << "\n";
    }
}
