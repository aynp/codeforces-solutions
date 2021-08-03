#include <iostream>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int one=0, two=0, three=0, four=0;
    for (int i = 0; i < n; i++){
        std::cin >> a[i];

        if (a[i] == 1) {
            one++;
        }
        if (a[i] == 2) {
            two++;
        }
        if (a[i] == 3) {
            three++;
        }
        if (a[i] == 4) {
            four++;
        }        
    }

    int req;
    req = std::min(one,three);
    one = one -req;
    three = three - req;
    req = req+four+three;

    req = req + two/2;
    two = two%2;

    if (two==1) {
        req = req + 1;
        if (one <= 2) {
            one = 0;
        }
        else {
            one = one - 2;
        }
    }

    req = req + ((one+3)/4);

    std::cout << req << "\n";
    
    return 0;
}//main
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
