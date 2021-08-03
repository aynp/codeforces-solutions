//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,pos_count=0;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++){
        std::cin >> v[i];
        if (v[i] > 0){
            pos_count++;
        }
    }
    std::sort(v.begin(),v.end());

    std::cout << 1 << ' ' << v[0] << '\n';
    if (v[n-1] == 0){
        std::cout << 2 << ' ' << v[1] << ' ' << v[2] << '\n';
        std::cout << n-3 << ' ';
        for (int i = 3; i < n; i++){
            std::cout << v[i] << ' ';
        }
        return;
    }
    std::cout << 1 << ' ' << v[n-1] << '\n';
    std::cout << n-2 << ' ';
    for (int i = 1; i < n-1; i++){
        std::cout << v[i] << ' ';
    }
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
//Print a -ve integer in 1st array, A positive integer / 2 negative integers in 2nd array
//and remaining all in 3rd array as it is has a 0 so product will be zero
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
