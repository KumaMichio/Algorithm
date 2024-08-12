#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1000000007;

ll binpow(ll a, ll b){
    if(b == 0) return 1; // base case
    ll x = binpow(a, b / 2); // a ^ (b / 2)
    if(b % 2 == 1) return x * x * a;
    else return x * x;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    cout << binpow(10,16) << endl;
}