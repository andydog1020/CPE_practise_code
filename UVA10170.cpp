#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long s, d, tot = 0;
    while (cin >> s >> d)
    {
        tot = 0;
        while (tot < d)
        {
            tot += s;
            s += 1;
        }
        cout << s - 1 << "\n";
    }
}
