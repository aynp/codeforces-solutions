//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,k,t;
    std::cin >> n >> k;
    int max = 5 - k;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> t;
        if(t<=max){
            count++;
        }  
    }
    std::cout << count/3 << '\n';
    
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
