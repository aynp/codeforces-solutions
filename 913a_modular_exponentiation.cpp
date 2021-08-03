//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

int power(int a, int n){
    int res = 1;
    while(n){
        if(n&1){
            res = res*a;
            n--;
        } else{
            a = a*a;
            n = n/2;
        }
    }
    return res;
}

void solve(){
    int n,m;
    std::cin >> n >> m;

    if (n>30){
        std::cout << m;
        return;
    }
    n = power(2,n);
    std::cout << m%n << '\n';

    // cin>>n>>m; int a=pow(2,n); cout<< a << " " <<m%a<<endl;
        //This will also work :')
        // As value of a would be minimum value of int which would be greater than the range of m :`|

    
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
//DONE
/*
m mod 2^n
Value of n over a certain value will be big enough so that 2^n exceeds the range of m
For value of n less that that value it is easy to calculate :)
Problem by - tourist :flushed:
*/
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
