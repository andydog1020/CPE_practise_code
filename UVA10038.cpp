#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> ans;
        int list1[n], num;
        bool YN = true;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            list1[i] = num;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (find(ans.begin(), ans.end(), abs(abs(list1[i]) - abs(list1[i + 1]))) == ans.end())
            {
                ans.push_back(abs(abs(list1[i]) - abs(list1[i + 1])));
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (find(ans.begin(), ans.end(), i) == ans.end())
            {
                YN = false;
                break;
            }
        }
        if (YN)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
}
