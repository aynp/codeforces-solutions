//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n, m;
    std::cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::set<int> s;
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
        s.insert(a[i]);
        ans[i] = s.size();
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        std::cin >> x;
        std::cout << ans[x-1] << '\n';
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
