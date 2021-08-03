//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

std::vector<int> v;

void elephant(int x){
    if(x == 1){
        return;
    }
    swap(v[x-1],v[x]);
    elephant(x-1);
}

void solve(){
    int n;
    std::cin >> n;

    v.push_back(0);
    for (int i = 1; i <= n; i++){
        v.push_back(i);
    }

    elephant(n);

    for (int i = 1; i <= n; i++){
        std::cout << v[i] << ' ';
    }
    
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    // std::cin.tie(NULL);

    solve();

    return 0;
}//main
//DONE

//If x = 1, exit the function.
//Otherwise, call f(x - 1), and then make swap(ax - 1, ax) (swap the x-th and (x - 1)-th elements of a).
// ????
// 

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
