#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;

int n, k, a[MAX];
ll f[MAX];

void run_case()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    memset(f, 0, sizeof(f));
    f[0] = 1;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++) // de n o trong de dc lap nhieu lan
        {
            if (i - a[j] >= 0)
            {
                f[i] += f[i - a[j]];
                f[i] %= MOD;
            }
        }
    }

    cout << f[k] << endl;
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