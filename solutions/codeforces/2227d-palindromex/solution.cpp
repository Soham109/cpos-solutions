//        /\_/|
//       ( •_• )   SOHAM AGGARWAL
//      / >  >     gf said "commit"
//                 so I pushed to GitHub

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 4e18;

#define all(c) (c).begin(), (c).end()
#define rep(i, a, b) for (int i = (a); i < (b); i++)

void expand(const vi &a, int n, int l, int r, int &ans) {
    vi freq(n + 1, 0);
    int cur_mex = 0;

    auto add = [&](int x) {
        freq[x]++;
        while (cur_mex <= n && freq[cur_mex] > 0) {
            cur_mex++;
        }
    };

    while (l >= 0 && r < 2 * n && a[l] == a[r]) {
        add(a[l]);

        if (l != r) {
            add(a[r]);
        }

        ans = max(ans, cur_mex);

        l--;
        r++;
    }
}

void solve() {
    int n;
    cin >> n;

    vi a(2 * n);

    int o1 = -1, o2 = -1;
    
    rep(i, 0, 2 * n) {
        cin >> a[i];

        if (a[i] == 0) {
            if (o1 == -1) o1 = i;
            else o2 = i;
        }
    }

    int ans = 0;

    expand(a, n, o1, o1, ans);

    expand(a, n, o2, o2, ans);

    int sum = o1 + o2;

    if (sum % 2 == 0) {
        int mid = sum / 2;
        expand(a, n, mid, mid, ans);
    } 
    else {
        int l = sum / 2;
        int r = l + 1;
        expand(a, n, l, r, ans);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}