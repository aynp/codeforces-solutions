#include <iostream>
#include <cmath>

int main(){

    std::ios::sync_with_stdio(false);
    
    long double n,m,a;
    std::cin >> n >> m >> a;

    long long num = ceil(n/a)*ceil(m/a);
    std::cout << num;

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
