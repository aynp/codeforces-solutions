#include <iostream>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << std::max({a*b + c, a* (b+c) , (a+b) *c ,a + b*c,
    						 a*(c+b) ,a*c + b, a*b*c, a+b+c});

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
