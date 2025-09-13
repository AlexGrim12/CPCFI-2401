#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
