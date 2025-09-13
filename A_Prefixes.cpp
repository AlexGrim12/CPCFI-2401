#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i += 2)
    {
        if (s[i] - s[i + 1] == 0)
            s[i] = 'a' + 'b' - s[i], ans++;
    }

    cout << ans << endl
         << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
