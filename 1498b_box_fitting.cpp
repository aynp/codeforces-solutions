#include <iostream>

int mode(int input[], int n){
    int count[n];

    for (int i=0; i < n; i++) {
        count[input[i]]++;
    }

    int index = n-1;
    for (int i=n-2; i >=0; i--) {
        if (count[i] >= count[index])
            index = i;
    }

    return index;
}


int main() {
		int t;
		std::cin >> t;	

		for (int i = 0; i < t; i++ ) {

			int n;
			std::cin >> n;
			int W;
			std::cin >> W;			
			
			int w[n];
			
			for (int j = 0; j < n; j++) {
				std::cin >> w[i];
			}

			int moded = mode(w, n);
			int count = 0;
			for (int k = 0; k < n; k++) {
				if (w[k]==moded) {
					count ++;
				}
			}
			std::cout << count << "\n";
		}
	}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
