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
    std::string s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s;
        if(s == "Tetrahedron") count += 4;
        if(s == "Cube") count += 6;
        if(s == "Octahedron") count += 8;
        if(s == "Dodecahedron") count += 12;
        if(s == "Icosahedron") count += 20;
    }
    std::cout << count << '\n';
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
