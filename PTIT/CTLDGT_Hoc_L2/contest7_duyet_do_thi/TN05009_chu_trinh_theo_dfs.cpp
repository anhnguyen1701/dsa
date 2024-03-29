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
int parent[1001];

int last;
bool ok;

void dfs(int u)
{
    visited[u] = true;
    for (int v : ke[u])
    {
        if (ok)
            return;
        if (!visited[v])
        {
            parent[v] = u;
            last = v;
            dfs(v);
        }
        else if (v != parent[u] && v == 1)
            ok = true;
    }
}

void run_case()
{
    memset(visited, false, sizeof(visited));
    memset(ke, 0, sizeof(ke));
    memset(parent, -1, sizeof(parent));

    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    for (int i = 1; i <= v; i++)
        sort(ke[i].begin(), ke[i].end());

    ok = false;

    vector<int> res;
    dfs(1);
    if (ok)
    {
        int s = 1, t = last;
        while (t != s)
        {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);

        reverse(res.begin(), res.end());

        for (auto x : res)
            cout << x << " ";
        cout << s << endl;
    }
    else
        cout << "NO\n";
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