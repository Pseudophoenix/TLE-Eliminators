#include <bits/stdc++.h>
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define debug(_) cout << #_ << " is " << _ << "\n";
using namespace std;
using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n;
        cin >> k;
        int arr[n];
        int rem=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(k==arr[i])
                rem=1;
        }
        rem==1?cout << "YES\n":cout<<"NO\n";
    }
    return 0;
}