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
    ll w,h,d; cin>>w>>h>>d;
    ll n; cin>>n;

    //a,b,c s.t. a|w, b|h, c|d & abc=n
    ll a = __gcd(n,w);
    ll r1=n/a;

    ll b = __gcd(r1,h);
    ll r2=r1/b;

    ll c = __gcd(r2,d);
    ll r3=r2/c;

    if(r3==1){
        cout<<a-1<<" "<<b-1<<" "<<c-1<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }

    //testasdf
    //test again
}   
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}