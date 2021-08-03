//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

std::map<int,int> m;
int s1=0,s2=0;
void solve(){
    int temp; 
    
    std::cin >> temp;
    s1 = s1 + m[temp]+1;
    s2 = s2 + m.size()-m[temp];
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,temp;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> temp;
        m[temp] = i;
    }
    
    int testcases;
    std::cin >> testcases;
    
    while(testcases--) {
        solve();
    }
    std::cout << s1 << " " << s2 << '\n';
    return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
