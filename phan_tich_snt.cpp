#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// ứng dụng của phân tích
// n = p1^e1 . p2^e2 . p3^e3 . ... pk^ek
// tính số ước: d(n) = (e1 +1)(e2 +1)(e3 +1)....(ek +1) 
// tích các ước: u(n) = n^(d(n)/2)


// phân tích thừa số nguyên tố
void pt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n > 1) cout << n << endl;
}

// gcd(a,b) = a if b=0
//          = gcd(b,a % b)
// Ước chung lớn nhất
ll gcd(ll a, ll b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

// Bội chung nhỏ nhất
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    pt(1020);
    
    // hàm tìm ucln trong 1 mảng 
    int n; cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) cin >> a[i];
    int res = 0; // gcd (0, a)= a
    for(int i = 0; i < n; i++){
        res = gcd(res, a[i]);
    }
    cout << res << endl;

    // hàm tìm bcnn trong 1 mảng
    int n; cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) cin >> a[i];
    int res = 1; // lcm(1, a )= a
    for(int i = 0; i < n; i++){
        res = gcd(res, a[i]);
    }
    cout << res << endl;
    return 0;
}