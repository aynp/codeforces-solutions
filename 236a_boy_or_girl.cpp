#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    
    int count = 0;
    
    std::string inp;
    getline(std::cin,inp);

    for (int i = 0; i < inp.length(); i++)
    {
    	if(i != inp.rfind(inp[i])){
    		count ++;
    	}
    }


    if ((inp.length()-count)%2 == 0	)
    {
    	std::cout << "CHAT WITH HER!";
    }
    else
    	std::cout << "IGNORE HIM!";
    

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
