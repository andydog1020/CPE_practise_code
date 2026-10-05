#include <bits/stdc++.h>

using namespace std;

long long count1(long long num)
{
    int ans = 0;
    string str2 = to_string(num);
    for (char c : str2)
    {
        ans += c - '0';
    }
    return ans;
}

int main()
{
    string str1;
    while (cin >> str1)
    {
        if (str1 == "0")
            return 0;
        cout << str1 << " ";
        long long num = 0;
        for (char c : str1)
        {
            num += c - '0';
        }
        if (num % 9 != 0)
        {
            cout << "is not a multiple of 9.\n";
        }
        else
        {
            int tot = 1;
            long long tmp;
            while (num > 9)
            {
                tmp = count1(num);
                num = tmp;
                tot++;
            }
            cout << "is a multiple of 9 and has 9-degree " << tot << ".\n";
        }
    }
}
