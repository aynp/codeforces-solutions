#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    
    int a,b;
    std::cin >> a >> b;
    int time = a;

    while(a>=b){
    	time = time + a/b;
    	a = (a/b) + (a%b);
    }

    std::cout << time;  

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
