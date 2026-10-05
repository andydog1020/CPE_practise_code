#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x_tmp, y_tmp;
    double x, y;
    while (cin >> x_tmp >> y_tmp)
    {
        vector<double> listx;
        vector<double> listy;
        listx.push_back(x_tmp);
        listy.push_back(y_tmp);
        for (int i = 0; i < 3; i++)
        {
            cin >> x_tmp >> y_tmp;
            if (find(listx.begin(), listx.end(), x_tmp) != listx.end() && find(listy.begin(), listy.end(), y_tmp) != listy.end())
            {
                x = x_tmp;
                y = y_tmp;
                listx.erase(find(listx.begin(), listx.end(), x_tmp));
                listy.erase(find(listy.begin(), listy.end(), y_tmp));
            }
            else
            {
                listx.push_back(x_tmp);
                listy.push_back(y_tmp);
            }
        }
        double ansx = listx[0] - x + listx[1];
        double ansy = listy[0] - y + listy[1];
        cout << fixed << setprecision(3) << ansx << " " << ansy << "\n";
    }
}
