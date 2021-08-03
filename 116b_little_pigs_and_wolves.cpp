//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

//Note - It is guaranteed that there will be at most one wolf adjacent to any little pig.
//so it becomes easy-easy :)
void solve(){
    int n,m;
    std::cin >> n >> m;

    std::vector<std::vector<char>> arr(n+2,vector<char> (m+2,'.')) ;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            std::cin >> arr[i][j];
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (arr[i][j] == 'W' && (arr[i-1][j]=='P' || arr[i+1][j]=='P' || arr[i][j+1]=='P' || arr[i][j-1]=='P' )){
                count++;
            }
        }
    }
    std::cout << count << '\n';
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
