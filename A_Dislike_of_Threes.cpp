#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    cin >> n;
    for (int i = 1;; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
            continue;

        if (--n == 0)
        {
            cout << i << endl;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
