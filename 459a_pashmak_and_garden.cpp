//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int x1,x2,y1,y2,x3,y3,x4,y4;
    std::cin >> x1 >> y1 >> x2 >> y2;

    //Check if slope is 0 or inf or 1 or -1
    if( (x1!=x2) && (y1!=y2) && (abs(y1-y2)!=abs(x1-x2)) ){
        std::cout << -1 << '\n';
        return;
    }
    
    if(x1 == x2){
        int side = abs(y1-y2);
        std::cout << x2+side << " " << y2 << " " << x1+side << " " << y1 << '\n';
        return;
    }
    if(y1 == y2){
        int side = abs(x1-x2);
        std::cout << x2 << " " << y2+side << " " << x1 << " " << y1+side << '\n';
        return;
    }
    std::cout << x2 << " " << y1 << " " << x1 << " " << y2 << '\n';      
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
// x1,y1    3
//  4       x2,y2
//3 -> x2,y1
//4 -> x1,y2

//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
