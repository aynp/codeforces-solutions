//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m,d;
    std::cin >> n >> m >> d;
    std::vector<int> v(n*m);
    for (int i = 0; i < n*m; i++){
        std::cin >> v[i];
    }
    std::sort(v.begin(),v.end());
    int x = v[0]%d;
    for (int i = 0; i < n*m; i++){
        if(v[i]%d != x){
            std::cout << -1 << '\n';
            return;
        }
    }
    int mt = (m*n)/2;
    int ans = 0;
    for (auto &&i : v){
        ans = ans + abs(i-v[mt]);
    }
    std::cout << ans/d << '\n';
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
