#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::ios::sync_with_stdio(false);
    
    std::string inp;
    char vow[12] = {'a','e','i','o','u','y'};
    getline(std::cin, inp);

    transform(inp.begin(), inp.end(), inp.begin(), ::tolower); 

    for (char a : inp)
    {
    	if(std::find(std::begin(vow), std::end(vow), a) != std::end(vow)){

    	}
    	else
    		std::cout << "." << a;
    }

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
