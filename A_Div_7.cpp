#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 7 == 0)
    {
        cout << n << endl;
    }
    else
    {
        int ans = -1;
        for (int j = 0; j < 10; j++)
        {
            if ((n - n % 10 + j) % 7 == 0)
            {
                ans = n - n % 10 + j;
                break; // Encontramos la respuesta, salimos del loop
            }
        }
        cout << ans << endl;
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
