#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, rk, ck, rd, cd;
    cin >> n >> rk >> ck >> rd >> cd;
    int dis_var = 0; // When rows are same (first if, else part will not be evaluated)
    int dis_hor = 0; // When columns are same
    if(rk > rd) {
        dis_var = n - rd;
    }
    else if(rk < rd) {
        dis_var = rd;
    }
    if(ck > cd) {
        dis_hor = n - cd;
    }
    else if(ck < cd) {
        dis_hor = cd;
    }
    cout << max(dis_var, dis_hor) << '\n';

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
