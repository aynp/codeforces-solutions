//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,k,a,b;
    std::cin >> n >> k;
    std::map<int,int> s;
    std::vector<int> score(n);
    for (int i = 0; i < n; i++){
        std::cin >> a >> b;
        score[i] = a*100 - b;
        s[score[i]]++;
    }
    std::sort(score.begin(),score.end(),greater<int>());
    std::cout << s[score[k-1]] << '\n';
    
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
