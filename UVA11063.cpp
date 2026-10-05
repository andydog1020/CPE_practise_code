#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 1;
    while (cin >> n)
    {
        int list1[n], num;
        bool YN = true;
        vector<int> list2;

        cin >> num;
        list1[0] = num;
        for (int i = 1; i < n; i++)
        {
            cin >> num;
            list1[i] = num;
            if (list1[i - 1] >= list1[i])
            {
                YN = false;
            }
        }
        if (YN)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (find(list2.begin(), list2.end(), list1[i] + list1[j]) == list2.end())
                    {
                        list2.push_back(list1[i] + list1[j]);
                    }
                    else
                    {
                        YN = false;
                        break;
                    }
                }
            }
        }
        if (YN)
            cout << "Case #" << x << ": It is a B2-Sequence.\n";
        else
            cout << "Case #" << x << ": It is not a B2-Sequence.\n";
        cout << "\n";
        x++;
    }
}
