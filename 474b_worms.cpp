//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n;
    std::cin >> n;
    int x;
    std::vector<int> a(n+1,0);
    for (int i = 1; i <= n; i++) {
        std::cin >> x;
        a[i] = x + a[i-1];
    }
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        std::cin >> x;
        std::cout << std::lower_bound(a.begin(),a.end(),x)-a.begin() << '\n';
    }
    
    
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
