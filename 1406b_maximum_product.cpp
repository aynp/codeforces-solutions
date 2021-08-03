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
    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }
    std::sort(v.begin(),v.end());

    if(v[n-1]>=0){
        std::cout << v[n-1] *max( (v[0]*v[1]*v[n-2]*v[n-3]) ,max( (v[0]*v[1]*v[2]*v[3]) , (v[n-2]*v[n-3]*v[n-4]*v[n-5]) )) << '\n';   
    }
    else {
        std::cout << v[n-1] *min( (v[0]*v[1]*v[n-2]*v[n-3]) ,min( (v[0]*v[1]*v[2]*v[3]) , (v[n-2]*v[n-3]*v[n-4]*v[n-5]) )) << '\n';
    }
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcases;
    std::cin >> testcases;
    
    while(testcases--) {
        solve();
    }

    return 0;
}
//DONE :)

// n1 n2 n3 n4 ..... p1 p2 p3 p4 [p5]
// - - - - - - -
/*
All 5 -ve ->  
*/
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
