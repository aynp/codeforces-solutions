//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

void solve(){
    int n, sum = 0, odd_count = 0;
    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; i++){
        std::cin >> v[i];
        sum = sum + v[i];
        odd_count += odd_count + (v[i]&1);
    }
    if (sum&1){
        std::cout << odd_count << '\n';;
    }
    else {
        std::cout << n-odd_count;
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
