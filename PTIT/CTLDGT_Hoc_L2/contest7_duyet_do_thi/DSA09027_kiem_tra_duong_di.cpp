#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, e;
vector<int> ke[1001];
bool visited[1001];
int tplt[1001];
int cnt = 0;

void dfs(int s)
{
    visited[s] = true;
    tplt[s] = cnt;

    for (auto x : ke[s])
        if (!visited[x])
            dfs(x);
}

void run_case()
{
    cin >> v >> e;
    memset(visited, false, sizeof(visited));
    memset(ke, 0, sizeof(ke));
    memset(tplt, 0, sizeof(tplt));


    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            cnt++;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (tplt[x] == tplt[y])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}