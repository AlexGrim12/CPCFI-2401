#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    cin >> n;
    int height = 0;
    int current_level = 1;
    int cubes_needed = 0;

    while (true)
    {
        // Calculate cubes needed for current level
        // Level i needs sum of numbers from 1 to i
        cubes_needed += (current_level * (current_level + 1)) / 2;

        if (cubes_needed > n)
            break;

        height++;
        current_level++;
    }

    cout << height << endl;
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
