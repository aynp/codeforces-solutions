#include <iostream>
#include <string>
#include <algorithm>

char case_invert (char c){
    if (std::isupper(c)) 
        return std::tolower(c); 
    else
        return std::toupper(c); 
}

int main(){

    std::ios::sync_with_stdio(false);
    
    std::string inp;
    getline(std::cin, inp);
    int count = 1;
    for (int i = 1; i < inp.length(); i++)
    {
    	if (inp[i] < 96)
    	{
    		count++;
    	}
    }
    if (count == inp.length())
    {
    	std::transform(inp.begin(), inp.end(), inp.begin(), case_invert);
    }
    std::cout << inp;
    

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
