#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n;
    string s[n];
    m /= (n / 2);
    sort(s, s + n);
    for (int i = 0; i < n; i++)for (int j = i + 1; j < n; j++)
        {
            if (s[i].size() + s[j].size() == m)
            {
                cout << s[i];
                for (int k = 0; k < s[j].size() - 1; k++)cout << s[j][k];
                cout << endl;
                s[i] = "";
                s[j] = "";
            }
        }
    return 0;
}