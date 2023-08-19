#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, temp, ans = 0;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int a_score = a[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a_score && a[i] > 0)
        {
            ans++;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
