//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,x,c25=0,c50=0;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> x;
        if(x == 25){
            c25++;
            continue;
        }
        if(x == 50){
            if(c25<1){
                std::cout << "NO" << '\n';
                return;
            }
            c50++;
            c25--;
            continue;
        }
        if(x==100){
            if((c25<1 || c50<1) && (c25 < 3)){
                std::cout << "NO" << '\n';
                return;
            }
            if(c50>0){
                c25--;
                c50--;
                continue;
            }
            c25 = c25-3;
        }
    }
    std::cout << "YES" << '\n';
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
