#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fi first
#define se second

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    string date;
    vector<string> name;
    while (cin >> s)
    {
        if (isdigit(s[0]))
            date = s;
        else
            name.push_back(s);
    }

    for (string &x : name)
    {
        x[0] = toupper(x[0]);
        for (int i = 1; i < x.size(); i++)
            x[i] = tolower(x[i]);
    }

    if (date[2] != '/')
        date = "0" + date;
    if (date[5] != '/')
        date.insert(3, "0");

    for (auto x : name)
        cout << x << " ";
    cout << endl;
    cout << date;
    return 0;
}