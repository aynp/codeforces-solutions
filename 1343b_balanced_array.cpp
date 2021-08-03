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
    if(n%4 != 0){
        std::cout << "NO" << '\n';
        return;
    }
    n = n/2;
    cout << "YES" << endl;
    
    for (int i = 1; i <= n; ++i) {
        cout << i * 2 << " ";
    }
    
    for (int i = 1; i < n; ++i) {
        cout << i * 2 - 1 << " ";
    }

    cout << 3 * n - 1 << endl;
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcases;
    std::cin >> testcases;
    
    while(testcases--) {
        solve();
    }//testcases

    return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
