#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    
    int n, answer=0;
    std::cin >> n;
    std::cin.ignore();
    std::string temp;
    
    for (int i = 0; i < n; i++)
    {
    	getline(std::cin, temp);
    	if(temp.find("++")!= std::string::npos)
    		answer++;
    	else
    		answer--;
    }
    std::cout << answer;

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
