#include <iostream>
#include <string>
#include <algorithm>

int main(){
	std::ios::sync_with_stdio(false);
    
    std::string inp;
    getline(std::cin, inp);

    char check[5] = {'h','e','l','l','o'};


    int j = 0;
    for (int i = 0; i < inp.length();i++)
    {
    	if(check[j] == inp[i])
    		j++;
    }
    if (j == 5)
    	std::cout << "YES";
    else
    	std::cout << "NO";
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
