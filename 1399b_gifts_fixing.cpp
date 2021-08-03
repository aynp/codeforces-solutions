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
    std::vector<int> a(n),b(n);
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        std::cin >> b[i];
    }
    
    int min_a = *min_element(a.begin(),a.end());
    int min_b = *min_element(b.begin(),b.end());
    
    int ans=0;
    for (int i = 0; i < n; ++i) {
	    ans += max(a[i] - min_a, b[i] - min_b);
    }
    std::cout << ans << '\n';

}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcases;
    std::cin >> testcases;
    
    while(testcases--) {
        solve();
    }

    return 0;
}
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
