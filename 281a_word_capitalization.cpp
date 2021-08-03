#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    
    std::string inp;
    getline(std::cin, inp);

    inp[0] = toupper(inp[0]);

    std::cout << inp;    

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
