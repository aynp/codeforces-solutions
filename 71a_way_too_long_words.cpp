#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string inp[n];

    for (int i = 0; i < n; i++)
    {
    	getline(std::cin, inp[i]);        	
    }

    for (int i = 0; i < n; i++)
    {
    	if (inp[i].length() > 10 ){
    		std::cout << inp[i][0] << inp[i].length()-2 << inp[i][inp[i].length()-1] << "\n";
    	}
    	else{
    		std::cout << inp[i] << "\n";
    	}
    }


    

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
