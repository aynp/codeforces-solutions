//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m,k,p,q,r,sum = 0;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++){
       std::cin >> a[i];
    }
    std::vector<int> b(n);
    for (int i = 0; i < n; i++){
       std::cin >> b[i];
    }
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    std::reverse(b.begin(),b.end());

    for (int i = 0; i < n; ++i) {
        if (i < k) 
            sum += max(a[i], b[i]);
        else 
            sum += a[i];
    }
    std::cout << sum << '\n';

    
}//solve

int32_t main(){
    std::ios::sync_with_stdio(false); std::cin.tie(NULL);
    auto time_start = chrono::high_resolution_clock::now();

    int testcases = 1;
    std::cin >> testcases;

    while(testcases--) {
        solve();
    }//testcases

    auto time_end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(time_end - time_start).count();

    time_taken *= 1e-9;
    cerr << setprecision(6) << time_taken << " ms" << '\n';
    return 0;
}//main
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
