#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a; // 終止條件：當餘數變為 0 時，此時的 a 就是最大公因數
    }
    else
    {
        return gcd(b, a % b); // 遞迴呼叫：把 b 當成新的被除數，把餘數 (a % b) 當成新的除數
    }
}

int main()
{
    int num;
    while (cin >> num)
    {
        if (num == 0)
        {
            return 0;
        }
        int G = 0;
        for (int i = 1; i < num; i++)
        {
            for (int j = i + 1; j <= num; j++)
            {
                G += gcd(i, j);
            }
        }
        cout << G << "\n";
    }
}
