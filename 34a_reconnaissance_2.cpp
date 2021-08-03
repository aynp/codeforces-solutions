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
    std::vector<int> v(n);
    for (int i = 0; i < n; i++){
        std::cin >> v[i];
    }
    int min = abs(v[n-1]-v[0]);
    int i1 = n,i2 = 1;
    for (int i = 0; i < n-1; i++)
    {
        if(abs(v[i+1]-v[i]) < min){
            min = abs(v[i+1]-v[i]);
            i1 = i+1;
            i2 = i+2;
        }
    }
    std::cout << i1 << " " << i2 << '\n';
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
