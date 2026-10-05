#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int count = 1; count <= n; count++)
    {
        int x = count;
        int N, num;
        string tmp;
        bool YN = true;
        cin >> tmp;
        cin >> tmp;
        cin >> N;
        int list1[N * N];
        for (int i = 0; i < N * N; i++)
        {
            cin >> num;
            list1[i] = num;
        }
        for (int i = 0; i <= (N * N) / 2; i++)
        {
            if (list1[i] != list1[N * N - 1 - i] || list1[i] < 0)
            {
                YN = false;
                break;
            }
        }
        if (YN == true)
        {
            cout << "Test #" << x << ": Symmetric.\n";
        }
        else
        {
            cout << "Test #" << x << ": Non-symmetric.\n";
        }
    }
}
