#include <bits/stdc++.h>

using namespace std;

string fun(string str1)
{
    int tot = 0;
    for (char c : str1)
    {
        tot += c - '0';
    }
    return to_string(tot);
}

int main()
{
    string str;
    while (cin >> str)
    {
        if (str == "0")
        {
            return 0;
        }
        while (str.size() > 1)
        {
            str = fun(str);
        }
        cout << str << "\n";
    }
}
