//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m;
    std::cin >> n >> m;
    int x = min(n,m);
    if(m>n){
        for (int i = 0; i < n; i++){
            std::cout << "GB";
        }
        for (int i = 0; i < m-n; i++)
        {
            std::cout << "G";
        }
        return;
    }
    for (int i = 0; i < m; i++){
        std::cout << "BG";
    }
    for (int i = 0; i < n-m; i++){
        std::cout << "B";
    }
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    solve();

    return 0;
}//main
// 4 2
// BGBGB B   GBGBBB
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
