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
    std::vector<int> v(n);

    for (int i = 0; i < n; i++){
        std::cin >> v[i];
    }
    std::sort(v.begin(),v.end());
    int sum = 0;
    for (int i = 0; v[i]<0 && i < m; i++){
        sum = sum - v[i];
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
