//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

int sumUT(int n){
    return (n*(n+1))/2;
}

void solve(){
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(m);
    for (int i = 0; i < m; i++){
       std::cin >> a[i];
    }
    std::sort(a.begin(),a.end());
    int max = 0, min = 0;
    int cs;
    int p = n; 
    for (int i = 0; i < m && p > 0; i++){
        if(p >= a[i]){
            p -= a[i];
            min += sumUT(a[i]);
        } else {
            min += sumUT(a[i]) - sumUT(a[i] - p);
            break;
        }
    }
    
    p = n;
    while(p--){
        max += a[m-1];
        a[m-1] -= 1;
        std::sort(a.begin(),a.end());
    }
    std::cout << max << " " << min << '\n';
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main
//DONE
// !!RECHECK 

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
