//@aryanpathania
#include <bits/stdc++.h>
//#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int MOD = 1073741824;
    int MAX = 1'000'000;
    int a,b,c;
    std::cin >>a>>b>>c;
    std::vector<int> div(MAX,0);
    
    for (int i = 1; i <= MAX; i++) {
        for (int j = 1; j * i <= MAX; j++){
            div[i * j]++;
        }
    }
    int sum = 0;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            for (int k = 1; k <= c; k++){
                sum = ((sum%MOD) + (div[i*j*k])%MOD)%MOD;
            }
            
        }
        
    }
    std::cout << sum << '\n';    
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
