#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x)
{
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

void solve()
{
    // Add your solution here
    int a, b;
    cin >> a >> b;

    int next = a + 1;
    while (!isPrime(next))
        ++next;

    cout << (next == b ? "YES" : "NO") << endl;
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
