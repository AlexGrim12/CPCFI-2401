#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    cin >> n;
    string s;
    cin >> s;
    while ((s[0] == '0' && s[s.size()-1] == '1') || (s[0] == '1' && s[s.size()-1] == '0'))
    {
        s.erase(0, 1);
        s.erase(s.size()-1, 1);
    }
    cout << s.size() << endl;
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
