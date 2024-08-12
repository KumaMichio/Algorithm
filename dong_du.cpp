#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1000000007;
// Đồng dư
// (A+B) % C = ((A % C) + (B % C)) % C
// (A-B) % C = ((A % C) - (B % C)) % C
// (A*B) % C = ((A % C) * (B % C)) % C
// (A^B) % C = (A % C) ^ B % C
// (A/B) % C = (A % C * B^-1) % C

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n; cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) cin >> a[i];
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res * (a[i] % 3);
        res %= 3;
    } 
    cout << res << endl;
    return 0;
}