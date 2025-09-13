#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here

    int an, bn,i=0;
    string a, b, x;

    cin >> an >> a >> bn >> b>>x;

    for(char c:x){
        if(c=='D'){
            a+=b[i];
        }
        else
        {
            a.insert(a.begin(), b[i]);
        }
        i++;
    }
    cout << a << endl;
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
