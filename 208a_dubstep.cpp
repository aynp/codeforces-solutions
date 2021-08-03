#include <iostream>
#include <string>

int main(){

    std::ios::sync_with_stdio(false);
    std::string s;
    getline(std::cin,s);

    while(s.find("WUB")!=std::string::npos){
    	if((s[s.find("WUB")-1] == ' ')||s.find("WUB")==0)
    		s.replace(s.find("WUB"),3,"");
    	else
    		s.replace(s.find("WUB"),3," ");
    }

    std::cout << s;


    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
