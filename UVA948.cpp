#include <bits/stdc++.h>

using namespace std;

vector<int> list1 = {1, 2};

int main()
{
    while (list1[list1.size() - 1] < 100000000)
    {
        list1.push_back(list1[list1.size() - 2] + list1[list1.size() - 1]);
    }

    int n = 0, num, AnsNum;
    string ans = "";
    bool YN = false;
    cin >> n;
    while (n--)
    {
        cin >> num;
        AnsNum = num;
        ans = "";
        YN = false;
        for (int i = list1.size() - 1; i >= 0; i--)
        {
            if (num >= list1[i])
            {
                ans += '1';
                YN = true;
                num -= list1[i];
            }
            else if (YN)
            {
                ans += '0';
            }
        }
        cout << AnsNum << " = " << ans << " (fib)\n";
    }
}
