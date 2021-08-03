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
    std::cin >> n >> m;
    std::vector<std::vector<char>> v(n, std::vector<char> (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> v[i][j];

            if(v[i][j]=='.'){
                if((i+j&1)){
                    v[i][j] ='W';
                } else {
                    v[i][j] = 'B';
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cout << v[i][j];
        }
        std::cout << '\n';
    }

    
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
