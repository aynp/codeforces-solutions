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
    int n1=0,n2=0,temp1,temp2;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp1 >> temp2;
        if(temp1){
            n1++;
        }
        if(temp2){
            n2++;
        }
    }
    int count = 0;
    if(n2>n/2){
        count = count + n-n2;
    } else {
        count = count + n2;
    }

    if(n1>n/2){
        count = count + n-n1;
    } else {
        count = count + n1;
    }
    std::cout << count << '\n';
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main
// *DONE
// 2 2 2 -> 0
//

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
