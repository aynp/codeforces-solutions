//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

struct level{
    int xi,yi;
};

bool compare(level a, level b){
    return a.xi < b.xi;
}

void solve(){
    int n,s;
    std::cin >> s >> n;
    std::vector<level> v(n);
    
    for (int i = 0; i < n; i++){
        std::cin >> v[i].xi >> v[i].yi;
    }
    std::sort(v.begin(),v.end(),compare);
    int lvl = 0;
    while(n--){
        if(v[lvl].xi >= s){
            std::cout << "NO" << '\n';
            return;
        }
        s = s + v[lvl].yi;
        lvl++;
    }

    std::cout << "YES" << '\n';
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
