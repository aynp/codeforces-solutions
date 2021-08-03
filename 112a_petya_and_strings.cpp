#include <iostream>

int compare(char &a, char &b){
	if(a<b){
		std::cout << -1;
		return 1;
	}

	if(a>b){
		std::cout << 1;
		return 1;
	}

	return 0;
}

int main(){

    std::ios::sync_with_stdio(false);
    
    std::string string1, string2;
    int count = 0;

    getline(std::cin, string1);
    getline(std::cin, string2);

    for (int i = 0; i < string1.length() ; i++)
    {
    	string1[i] = tolower(string1[i]);
    	string2[i] = tolower(string2[i]);

    	if (compare(string1[i],string2[i]) != 0)
    	{
    		break;
    	}
    	count ++;
    }
    
    if (count == string1.length())
    {
    	std::cout << 0;
    }

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
