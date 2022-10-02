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
    int n, h, m;
    cin >> n >> h >> m;
    int arr[n * 2], a[n];
    for (int i = 0; i < n * 2; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        a[i] = arr[i * 2] * 60 + arr[i * 2 + 1];
    }
    int sleep = h * 60 + m, time = 12345, temp;

    for (int i = 0; i < n; i++)
    {
        temp = a[i] - sleep;
        if (h > arr[i * 2])
            temp += 1440;

        time = min(time, temp);
    }

    cout << time / 60 << " " << time % 60;
}