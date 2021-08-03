//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n, count=0;
    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; i++){
        std::cin >> v[i];
    }
    int min = v[0];
    int max = v[0];

    for (int i = 1; i < n; i++){
        if (v[i] > max){
            count++;
            max = v[i];
        }
        if (v[i] < min){
            count++;
            min = v[i];
        }
    }
    std::cout << count;
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
