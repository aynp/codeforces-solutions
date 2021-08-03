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

    for (int i = 0; i <= n; i++){
        for (int j = 2*(n-i)-1; j >= 0; j--){
            std::cout << " ";
        }
        
        for (int j = 0; j <= i; j++){
            if(j==0){
                std::cout << j;
            }else
                std::cout << " " << j;
        }

        for (int j = i - 1; j >= 0; j--){
            std::cout << " " << j;
        }
        std::cout << '\n';      
    }

    for (int i = n-1; i >= 0; i--){
        for (int j = 2*(n-i)-1; j >= 0; j--){
            std::cout << " ";
        }
        
        for (int j = 0; j <= i; j++){
            if(j==0){
                std::cout << j;
            }else
                std::cout << " " << j;
        }

        for (int j = i - 1; j >= 0; j--){
            std::cout << " " << j;
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

/*
      0
    0 1
  0 1 2
0 1 2 3

2*n
*/

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
