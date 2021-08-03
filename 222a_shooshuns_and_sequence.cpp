//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m,k,p,q,r;
    std::cin >> n >> k;
    std::deque<int> a(n);
    for (int i = 0; i < n; i++){
       std::cin >> a[i];
    }
    std::set<int> aK;
    for (int i = k-1; i < n; i++){
        aK.insert(a[i]);
    }
    if(aK.size() > 1){
        std::cout << -1 << '\n';
        return;
    }
    int kp = k-1;
    int count = 0;
    while(kp >= 0){
        if(a[kp] != a[k-1]){
            std::cout << kp+1 << '\n';
            return;
        }
        kp--;
    }
    std::cout << 0 << '\n';
}//solve

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
