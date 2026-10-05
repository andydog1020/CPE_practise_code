#include <bits/stdc++.h>

using namespace std;

string fun(long long num)
{
    string str = "";
    if (num == 0)
        return "0";
    if (num >= 10000000)
    {
        str += fun(num / 10000000) + " kuti";
        num %= 10000000;
        if (num > 0)
            str += " ";
    }
    if (num >= 100000)
    {
        str += to_string(num / 100000) + " lakh";
        num %= 100000;
        if (num > 0)
            str += " ";
    }
    if (num >= 1000)
    {
        str += to_string(num / 1000) + " hajar";
        num %= 1000;
        if (num > 0)
            str += " ";
    }
    if (num >= 100)
    {
        str += to_string(num / 100) + " shata";
        num %= 100;
        if (num > 0)
            str += " ";
    }
    if (num > 0)
        str += to_string(num);
    return str;
}

int main()
{
    long long num;
    string ans;
    int n = 1;
    while (cin >> num)
    {
        ans = fun(num);
        cout << setw(4) << n << ". " << ans << "\n";
        n++;
    }
}
