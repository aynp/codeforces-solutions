//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m,k,p,q = 0,r;
    std::cin >> n;
    std::vector<int> h(n);
    std::map<int, int> mp;
    for (int i = 0; i < n; i++){
       std::cin >> h[i] >> k;
       mp[k]++;
    }
    for (int i = 0; i < n; i++)
    {
        if(mp[h[i]]>0){
            q+=mp[h[i]];
        }
    }
    std::cout << q << '\n';
    
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
