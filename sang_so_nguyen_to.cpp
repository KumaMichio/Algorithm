#include <bits/stdc++.h>
using namespace std;

//Liet ke, dem các so nguyen to nho hon hoac bang N ( N <= 10^7 )
// nt[i] : i co phai so nguyen to hay ko

const int maxN = 10000000;
bool nt[maxN + 1]; // 0 => 10^7

// step1: set nt[i] = true ; tat ca cac so trong mang deu la so nguyen to

void sang(){
    for(int i=0; i<= maxN; i++){
        nt[i] = true;
    }
    // cach viet khac 
    // memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for(int i=2; i <= sqrt(maxN); i++){
        if(nt[i]){
            for(int j = i * i; j <= maxN; j += i){
                nt[j] = false;
            }
        }
    }
}
    int main(){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        sang();
        for(int i = 0; i <= 1000; i++){
            if(nt[i]) cout << i << " ";
        }
        return 0;
    }

