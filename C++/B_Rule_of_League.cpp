#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
void solve()
{
    int n, x, y, l, count, player = 1;
    cin >> n >> x >> y;
    l = x + y;
    count = l;
    if ((l != 0) && (x == 0 || y == 0))
    {
        if ((n - 1) % l == 0)
        {
            for (int i = 1; i < n; i++)
            {
                cout << player << " ";
                count--;
                if (count == 0)
                {
                    count = l;
                    player = i + 2;
                }
            }
        }
        else
            cout << -1;
    }
    else
        cout << -1;
}