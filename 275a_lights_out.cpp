//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int temp;

    // int v[5][5] = {0};
    std::vector<std::vector<int>> v(5,std::vector<int> (5,1));
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 3; j++){
            std::cin >> temp;
            if(temp&1){
                v[i][j] = 1^v[i][j];
                v[i+1][j] = 1^v[i+1][j];
                v[i][j+1] = 1^v[i][j+1];
                v[i-1][j] = 1^v[i-1][j];
                v[i][j-1] = 1^v[i][j-1];
            }
        }
    }

    for (int i = 1; i < 4; i++){
        for (int j = 1; j < 4; j++){
            std::cout << v[i][j];
        }
        std::cout << '\n';
    }
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
