#include <bits/stdc++.h>

using namespace std;

bool is_prime(int num)
{
    if (num <= -1)
        return false;

    if (num <= 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    int i = 5;
    while (i * i <= num)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}

int main()
{
    long long num;
    while (cin >> num)
    {
        if (num == 0)
        {
            return 0;
        }
        if (!is_prime(num))
        {
            cout << num << " is not prime.\n";
        }
        else
        {
            string tmp = to_string(num);
            reverse(tmp.begin(), tmp.end());
            int num2 = stoi(tmp);
            if (!is_prime(num2) || num2 == num)
            {
                cout << num << " is prime.\n";
            }
            else
            {
                cout << num << " is emirp.\n";
            }
        }
    }
}
