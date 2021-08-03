#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    
    std::string inp;
    getline(std::cin, inp);

    std::size_t lol1 = inp.find("1111111");
    std::size_t lol2 = inp.find("0000000");
    

    if ((lol1 != std::string::npos) || (lol2 != std::string::npos))
    {
    	std::cout << "YES";
    }
    else{
    	std::cout << "NO";
    }
    

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
