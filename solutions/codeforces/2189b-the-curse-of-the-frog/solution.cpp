//        /\_/|
//       ( •_• )   SOHAM AGGARWAL
//      / >  >     gf said "commit"
//                 so I pushed to GitHub

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

const int MOD=1e9+7;
const int INF = 1e9;
const ll LINF = 4e18;

#define all(c) (c).begin(), (c).end()
#define rep(i, a, b) for (int i = (a); i < (b); i++)

void solve() {
    ll n,x; cin>>n>>x;
    
    ll f=0;
    ll best=0;
    
    rep(i,0,n){
        ll a,b,c;
        cin>>a>>b>>c;
        f+=(b-1)*a;
        best=max(best,b*a-c);
    }

    if(f>=x){
        cout<<0<<"\n";
        return;
    }
    if(best<=0){
        cout<<-1<<"\n";
        return;
    }
    ll rem=x-f;
    ll ans=(rem+best-1)/best;
    cout<<ans<<"\n";

}   
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--)solve();
}