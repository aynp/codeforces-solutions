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
    if(n&1){
        std::cout << -1 << '\n';
        return;
    }
    for (int i = 0; i < n; i+=2)
    {
        std::cout << i+2 << " " << i+1 << " ";
    }
    
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main

/*
* 1 2 a[1]
*   a[1] = 2 a[2] = 1   
*   a[a[2]] = 1 a[a[1]] = 
*/
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
