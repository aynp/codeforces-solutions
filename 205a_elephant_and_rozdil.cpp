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
    int minimum = INT_MAX;
    bool flag = true;
    int min_index = 0;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++){
        std::cin >> v[i];

        if (v[i] == minimum){
            flag = false;
        }
        
        if (v[i] < minimum){
            minimum = v[i];
            flag = true;
            min_index = i+1;
        }  
    }
    if (flag){
        std::cout << min_index << '\n';
    }
    else {
        std::cout << "Still Rozdil" << '\n';
    }
    
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
