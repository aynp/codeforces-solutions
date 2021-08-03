//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    std::vector<std::vector<char>> v(4,vector<char> (4));
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cin >> v[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            int x = 0, y = 0;
            if (v[i][j] == '#') {
                x++;
            } else {
                y++;
            }
            if (v[i+1][j] == '#') {
                x++;
            } else {
                y++;
            }
            if (v[i][j+1] == '#') {
                x++;
            } else {
                y++;
            }
            if (v[i+1][j+1] == '#') {
                x++;
            } else {
                y++;
            }

            if(x >= 3 || y >= 3){
                std::cout << "YES" << '\n';
                return;
            } 
        }
    }
    std::cout << "NO" << '\n';
    return;
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
