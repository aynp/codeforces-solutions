#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    
    int n,k,count = 0;
    std::cin >> n;
    std::cin >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
    	std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
    	if(arr[i]>=arr[k-1] && arr[i]>0)
    		count++;
    }

    std::cout << count;

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
