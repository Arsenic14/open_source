#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        int end = r;
        vector<string> v;
        string str;
        for (int i = 0; i < r; i++)
        {
            cin >> str;
            v.push_back(str);
        }
        string temp, s;
        for (int j = 0; j < c; j++)
        {
            for (int i = r - 1; i >= 0; i--)
            {
                temp = v[i];
                if (temp[j] == 'o')
                {
                    end = i;
                }
                else if (temp[j] == '*')
                {
                    s = v[end - 1];
                    swap(temp[j], s[j]);
                }
            }
        }
        for (auto x : v)
        {
            cout << x <<"*"<< '\n';
        }
    }
    return 0;
}
