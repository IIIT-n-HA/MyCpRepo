#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
int i, N = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;
        int f = (n/a)*x, s = (n/b)*y;
        if(f==s) cout<<"ANY\n";
        else if(f>s) cout<<"DIESEL\n";
        else cout<<"PETROL\n";
    }
    return 0;
}