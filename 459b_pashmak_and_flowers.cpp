//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,k,p,q,r;
    std::cin >> n;

    std::vector<int> b(n);
    std::map<int,int> m;
    
    for (int i = 0; i < n; i++){
       std::cin >> b[i];
       m[b[i]]++;
    }

    std::sort(b.begin(),b.end());
    int s = b[0], l = b[n-1];
    if(s == l){
        std::cout << 0 << ' ' <<  (m[s]*(m[s] - 1))/2 << '\n';
        return;
    }
    std::cout << l-s << " " << m[s]*m[l] << '\n';
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
