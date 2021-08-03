#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    
    int n;
    std::cin >> n;
    int arr[3][n];
    int sum[3] = {0};
    
    for (int i = 0; i < n; i++)
    {
    	std::cin >> arr[0][i] >> arr[1][i] >> arr[2][i];
    	sum[0] = sum[0]+arr[0][i];
    	sum[1] = sum[1]+arr[1][i];
    	sum[2] = sum[2]+arr[2][i];

    }

    if (sum[0]==0 && sum[1]==0 && sum[2]==0)
    	std::cout << "YES";
    else
    	std::cout << "NO";

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
