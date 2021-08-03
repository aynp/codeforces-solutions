// IMP QUESTION

// Number not having any odd factor will only have 2 as it's prime factor.
// Thus number will be a power of 2 (i.e. will be in the form of 2^n)

#include <iostream>

bool isPowerOfTwo(unsigned long long int a){
        return a & (a-1);
}

int main(){

    std::ios::sync_with_stdio(false);
    
    int n;
    std::cin >> n;
    unsigned long long int inp;
    bool ans[n];

    for (int i = 0; i < n; i++){
    	std::cin >> inp;
        ans[i] = isPowerOfTwo(inp);
    }
    
    for(int i = 0; i < n; i++){
        if (ans[i]){
            std::cout << "YES" << "\n";
        }
        else {
            std::cout << "NO" << "\n";
        }
    }

    return 0;
}
//DONE
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
