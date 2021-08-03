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
    std::vector<int> v(n+1),u(n+1),v_sum(n+1),u_sum(n+1);

    for (int i = 1; i <= n; i++){
        std::cin >> v[i];
        u[i] = v[i];
    }
    std::sort(u.begin(), u.end());

    v_sum[0] = 0;
    u_sum[0] = 0;

    for (int i = 1; i <= n; i++){
        v_sum[i] = v_sum[i-1] + v[i];
        u_sum[i] = u_sum[i-1] + u[i];
    }

    // for (int i = 0; i < n+1; i++)
    // {
    //     std::cout << v_sum[i] << " " << u_sum[i] << '\n';
    // }
    

    int op,l,r,m;
    std::cin >> m;

    while(m--){
        std::cin >> op >> l >> r;
        
        int ans = 0;
        if (op == 1){
            std::cout << v_sum[r]-v_sum[l-1] << '\n';
        } 
        else {
            std::cout <<  u_sum[r]-u_sum[l-1] << '\n';
        }    
    }
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
//DONE
//TLE using normal approach
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
