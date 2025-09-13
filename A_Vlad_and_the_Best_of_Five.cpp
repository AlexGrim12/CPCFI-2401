#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int a = 0, b = 0;
    char tmp;
    for (int i = 0; i < 5; i++)
    {
        cin >> tmp;
        if (tmp == 'A')
            a++;
        else
            b++;
    }

    cout << ((a > b) ? 'A' : 'B') << endl;
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
