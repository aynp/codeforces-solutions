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
    int p,q,temp;
    std::set<int> s;
    std::cin >> p;    
    for (int i = 0; i < p; i++){
        std::cin >> temp;
        s.insert(temp);
    }
    std::cin >> q;
    for (int i = 0; i < q; i++){
        std::cin >> temp;
        s.insert(temp);
    }
    // std::cout << s.size() << '\n';
    if(s.size()==n){
        std::cout << "I become the guy." << '\n';
        return;
    }
    std::cout << "Oh, my keyboard!" << '\n';
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
