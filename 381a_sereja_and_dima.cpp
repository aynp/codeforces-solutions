//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n;
    std::cin >> n;

    std::deque<int> dq(n);

    for (int i = 0; i < n; i++){
        std::cin >> dq[i];
    }
    int s_pts=0, d_pts=0;
    while (dq.size())
    {
        (dq[0]>=dq[dq.end()-dq.begin()-1])?
            ({s_pts+=dq[0];
            dq.pop_front();})
        :
            ({s_pts+=dq[dq.end()-dq.begin()-1];
            dq.pop_back();});

        if(dq.size()>0)
        (dq[0]>=dq[dq.end()-dq.begin()-1])?({d_pts+=dq[0];dq.pop_front();}):({d_pts+=dq[dq.end()-dq.begin()-1];dq.pop_back();});
    }
    std::cout << s_pts << " " << d_pts << '\n';
    
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
