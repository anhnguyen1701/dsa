#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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

    int n;
    cin >> n;
    long a[n];
    for (long &x : a)
        cin >> x;

    cout << a[0] << " ";
    long max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            cout << a[i] << " ";
            max = a[i];
        }
    }

    return 0;
}