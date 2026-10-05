#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int r, s;
        cin >> r;
        vector<int> list1;
        while (r--)
        {
            cin >> s;
            list1.push_back(s);
        }
        sort(list1.begin(), list1.end());
        int mid = list1[list1.size() / 2];
        int tot = 0;
        for (int i : list1)
        {
            tot += abs(mid - i);
        }
        cout << tot << "\n";
    }
}
