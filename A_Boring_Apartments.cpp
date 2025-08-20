#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin >> n;
    // Add your solution here
    int dig = n[0] - '0' - 1;
    cout << dig * 10 + n.size() * (n.size() + 1) / 2 << endl;
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
