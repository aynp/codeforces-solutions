//Done
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int testcases;
    std::cin >> testcases;
    
    for(int test=0; test<testcases; test++){
        int n;
        std::cin >> n;
        std::vector<int> v(n);

        for (int i = 0; i < n; i++){
            std::cin >> v[i];    
        }

        std::sort(v.begin(), v.end());

        int count = 0;
        while(v[count] == v[count+1]){
            count++;
        }
        std::cout << n-count-1 << "\n";
        
    }//testcases
        
    return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
