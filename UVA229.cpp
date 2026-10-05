#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l, tot = 0;
        cin >> l;
        int list1[l];
        int num;
        for (int i = 0; i < l; i++)
        {
            cin >> num;
            list1[i] = num;
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l - i - 1; j++)
            {
                if (list1[j] > list1[j + 1])
                {
                    swap(list1[j], list1[j + 1]);
                    tot++;
                }
            }
        }
        cout << "Optimal train swapping takes " << tot << " swaps.\n";
    }
}
