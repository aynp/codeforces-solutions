//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    std::string s;
    std::cin >> s;
    s = to_string(stoi(s)+1);
    while (true){

        std::set<char> st;
        st.insert(s[0]);
        st.insert(s[3]);
        st.insert(s[2]);
        st.insert(s[1]);

        if (st.size() == 4){
            std::cout << s << '\n';
            return;
        }
        s = to_string(stoi(s)+1);
    }
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
//DONE

// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/
