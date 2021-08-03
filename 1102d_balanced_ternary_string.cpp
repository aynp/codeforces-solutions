//DONE
#include <iostream>
#include <vector>

int main(){
	std::ios::sync_with_stdio(false);
	
	int n, count=0;
	std::cin >> n;
	std::vector<char> v(n);

	for (int i = 0; i < n; i++){
		std::cin >> v[i];
	}
	for (int i = 0; i < n/3; i++){
		if(v[i]!='0'){
			count++;
		}
	}
	for (int i = n/3; i < 2*n/3; i++){
		if(v[i]!='1'){
			count++;
		}
	}
	for (int i = 2*n/3; i < n; i++){
		if(v[i]!='2'){
			count++;
		}
	}

	std::cout << count << "\n";
		
	return 0;
}//main

/*
1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8
*/
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
