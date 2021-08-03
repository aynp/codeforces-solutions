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
    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    int count = 0;
    int smallest = v[n-1];

    for (int i = n - 2; i >= 0; i--) {
        if (v[i] > smallest) {
            count++;
        }
        if(v[i] < smallest){
            smallest = v[i];
        }
    }
        
    std::cout << count << '\n';
       
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
