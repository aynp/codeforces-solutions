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
    int count = 0;
    while(n<=m){
        n = 3*n;
        m = 2*m;
        count++;
    }
    std::cout << count << '\n';
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
