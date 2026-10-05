#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num;
    while (cin >> n)
    {
        vector<int> list1;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            list1.push_back(num);
        }
        sort(list1.begin(), list1.end()); // 2,2,5,10   1,2,3,8,100,9000
        int mid1, mid2;
        int list1_size = list1.size();
        mid1 = list1[list1_size / 2 - 1];
        mid2 = list1[list1_size / 2];
        int mid;
        int count = 0;
        int x = 0;
        mid = mid1;
        for (int i : list1)
        {
            if (i == mid1 || i == mid2)
            {
                count++;
            }
        }
        x = mid2 - mid1 + 1;
        cout << mid << " " << count << " " << x << endl;
    }
}
