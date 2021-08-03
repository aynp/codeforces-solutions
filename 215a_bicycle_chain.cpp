//@aryanpathania
#include <bits/stdc++.h>
#define MOD 1'000'000'007
//#define MOD = 998'244'353
#define int int64_t
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n,m;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    std::cin >> m;
    std::vector<int> b(m);
    for (int i = 0; i < m; i++){
        std::cin >> b[i];
    }

    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    int maxr=0, count = 0;
    for (int i = 0; i < n; i++){
        for (int j = m - 1; j >= 0; j--){
            if(b[j]%a[i] == 0 && b[j]/a[i] >= maxr){
                if(b[j]/a[i] > maxr){
                    // std::cout << "HAHA" << '\n';
                    count = 0;
                    maxr = b[j]/a[i];
                }
                count++;
            }
        }
    }
    std::cout << count << '\n';
}

int32_t main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}//main
//DONE
/*
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░                        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░                                ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░                                        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░                                ░░            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░            ░░                      ░░            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░              ░░                        ░░            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░              ░░░░                        ░░            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░                ░░                          ░░              ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░                ░░                                            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░                  ░░                    ░░  ░░  ░░  ░░░░  ░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░                ░░░░            ░░        ░░░░  ░░      ░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░                  ░░░░░░          ░░░░░░    ░░░░░░░░░░  ░░  ▒▒░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░                  ░░░░░░            ░░░░    ▒▒░░▒▒▒▒░░  ░░    ▒▒      ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░      ░░      ░░░░░░░░    ░░░░    ░░░░░░  ▒▒▒▒▒▒▒▒░░░░░░    ▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░        ░░░░  ░░░░░░░░░░    ░░░░░░  ░░░░░░░░░░▒▒░░▒▒░░░░░░    ░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░        ░░░░  ▒▒  ░░░░    ░░▒▒░░░░  ░░▒▒░░░░░░▒▒░░▒▒░░░░      ░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░  ░░  ▓▓▒▒  ░░░░  ░░░░░░░░░░░░░░▒▒░░░░  ▒▒░░▒▒  ░░░░░░░░    ▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░  ░░        ░░  ▒▒▒▒  ░░░░░░░░░░░░░░░░░░░░▒▒░░▒▒  ░░░░▓▓▓▓▓▓░░▒▒░░    ▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░    ░░      ░░░░░░░░░░░░░░░░░░░░░░  ░░  ░░▒▒░░░░    ▓▓▓▓▓▓▒▒▒▒▒▒░░    ▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░    ▒▒░░    ░░▒▒    ░░▒▒░░░░░░░░  ░░░░    ░░░░░░    ▒▒▓▓▓▓▒▒▓▓▒▒░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░░░░░  ░░░░      ▒▒░░▒▒░░▒▒░░░░▒▒      ▒▒      ░░▓▓██▓▓░░░░░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░░░░░░░░░░░      ░░▒▒▒▒░░░░▓▓▓▓▒▒▒▒    ░░        ▓▓▓▓▒▒░░        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░        ▒▒░░░░░░░░      ░░▒▒▒▒░░▓▓▓▓▓▓░░▓▓              ▒▒░░▒▒            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░        ▒▒░░░░▒▒░░      ░░░░▒▒░░▓▓▓▓██▓▓▓▓░░            ░░░░░░    ░░      ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░        ░░▒▒░░▒▒░░      ░░░░▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒                      ░░  ░░  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░░░░░▒▒▒▒░░  ░░░░░░▒▒  ▓▓░░▒▒▒▒░░░░▒▒                      ░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░▒▒▒▒░░▒▒▒▒░░░░░░░░░░    ░░  ▒▒░░░░                        ░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░▒▒▒▒░░░░▒▒░░░░░░░░░░                                            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░▒▒▒▒░░░░░░░░░░▒▒░░▒▒                                    ░░      ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░░░▒▒░░░░░░▒▒░░░░░░░░                                  ░░░░      ▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ░░▒▒▒▒░░░░░░▒▒░░▒▒░░░░░░░░░░                          ▒▒▒▒▒▒      ▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ▒▒░░▒▒░░░░░░░░▒▒▒▒░░░░░░▓▓▓▓▒▒░░                    ░░  ░░▒▒░░░░  ▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▒▒░░▓▓▓▓██▒▒░░░░░░░░          ░░      ░░▒▒▒▒░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░      ▒▒▒▒▒▒░░░░░░░░░░▒▒▒▒▒▒░░▒▒▓▓▓▓▓▓▓▓░░░░░░░░▓▓▓▓▓▓░░        ░░░░▒▒░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░  ░░░░░░▒▒▒▒░░░░░░░░  ▒▒▒▒▒▒▒▒░░░░▒▒▓▓▓▓▓▓░░░░░░▓▓▓▓▓▓░░        ░░░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░  ░░  ▒▒▒▒▒▒░░░░░░    ▒▒▓▓▒▒▒▒▒▒░░░░▒▒████▓▓▓▓▒▒▓▓██▒▒        ░░  ░░░░▒▒▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░  ░░░░▒▒▒▒▒▒▒▒░░░░    ▓▓▓▓▓▓▒▒▒▒░░░░░░▒▒▓▓██▓▓████▓▓░░    ░░  ░░  ░░░░░░▓▓▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░  ░░░░▒▒▒▒▒▒░░░░░░    ▓▓▓▓▓▓▓▓▒▒▒▒░░░░  ░░▒▒▒▒▒▒▒▒░░          ░░    ░░  ▒▒▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░    ░░░░▒▒▒▒▒▒░░░░░░    ▓▓▓▓▓▓▒▒  ▒▒▒▒                    ░░  ░░░░    ░░    ░░▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░▒▒▒▒▒▒░░░░░░    ▓▓▓▓▓▓▒▒  ░░▒▒▒▒░░                ░░░░░░░░░░          ░░▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒  ░░    ░░▓▓▓▓▒▒    ░░░░▒▒                ░░▒▒░░░░░░            ░░▓▓▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░▒▒▒▒▒▒▒▒░░  ░░      ▓▓▓▓▓▓      ░░░░                ░░░░░░░░░░░░            ▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░▒▒▒▒▒▒▒▒    ░░      ▒▒▓▓▓▓        ░░                ░░          ░░      ░░░░▒▒▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░▒▒░░▒▒▒▒▒▒▒▒    ░░      ░░▓▓▓▓▒▒      ░░      ░░░░░░░░░░              ░░  ░░  ▒▒░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░▒▒░░▒▒▒▒▒▒░░  ░░░░        ▓▓▓▓▓▓            ░░        ░░                ░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░▒▒░░▒▒▒▒▒▒    ░░░░        ▓▓▓▓▓▓░░      ░░░░            ░░              ░░░░░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░  ▒▒░░▒▒▒▒▒▒      ░░░░      ▒▒▓▓▓▓▒▒      ░░                                ░░          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░  ▒▒░░▒▒▒▒░░        ░░        ▓▓▓▓▓▓▒▒░░    ░░              ░░            ░░              ░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░▒▒░░▒▒▒▒            ░░      ▒▒▓▓▓▓▓▓░░░░▒▒░░                          ░░              ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░  ▒▒  ▒▒▒▒            ░░      ▒▒▓▓▓▓▒▒░░░░░░░░                ░░        ░░              ▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░▒▒░░▒▒░░░░▒▒                  ░░  ▓▓▒▒░░░░░░░░░░                ░░      ░░              ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░▒▒░░░░░░░░▒▒              ░░    ░░░░░░░░        ░░░░░░░░░░                            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░                ░░  ░░░░░░                              ░░░░░░            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░  ░░              ░░░░░░▒▒▒▒                                                  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░▒▒░░░░░░            ░░░░░░░░░░▒▒                                                          ░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░▒▒▒▒░░░░░░          ░░░░░░░░░░░░░░░░                                                            ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░▒▒░░░░░░  ░░░░░░░░░░░░░░░░░░▒▒░░░░                                  ░░░░░░░░░░                ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░      ░░░░    ░░░░░░░░░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░░░░░░░░░░            ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░            ░░░░░░░░▒▒    ░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒░░░░░░░░░░▒▒░░░░        ░░░░░░░░    ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░        ░░░░░░░░░░▓▓░░      ░░░░░░░░░░░░░░▒▒░░░░░░░░        ░░░░░░░░          ░░░░░░░░  ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░    ░░░░░░░░░░▒▒▓▓                ░░░░░░▒▒░░░░░░          ░░░░░░░░░░          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░    ░░░░  ░░░░▒▒▓▓▓▓                ░░░░░░░░░░░░            ░░  ▒▒░░░░            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░        ░░░░░░▓▓▓▓▒▒                ░░░░░░░░▒▒░░          ░░    ░░▒▒░░░░          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░        ░░░░▒▒▓▓▓▓░░              ░░░░░░░░░░░░░░          ░░      ░░▒▒░░          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░      ░░░░░░▓▓▓▓▓▓░░              ░░░░░░░░░░░░          ░░        ▒▒░░░░░░          ░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░        ░░░░▒▒▓▓▓▓░░░░              ░░░░░░░░░░░░  ░░      ▒▒        ░░░░▒▒░░░░        ░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░  ░░  ░░░░▓▓▓▓░░    ░░            ░░░░░░░░░░▒▒░░▓▓░░▒▒░░░░░░        ▒▒░░▓▓░░        ░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░  ░░░░░░░░▓▓▓▓    ▒▒▓▓▒▒          ░░░░░░░░░░░░░░▓▓▓▓▒▒▒▒░░          ▒▒▓▓██░░░░        ░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░▓▓▓▓▒▒  ▒▒▓▓▓▓▓▓▓▓░░      ░░░░░░░░░░░░░░▓▓████░░░░            ██████░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░  ░░▒▒▓▓▓▓░░░░▓▓▓▓▓▓▓▓▓▓▓▓▒▒  ░░░░░░░░░░░░░░░░██████▓▓░░░░          ▒▒▓▓▒▒▒▒░░        ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░▒▒▓▓▓▓  ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒░░░░░░░░░░░░░░████████▒▒░░          ░░▓▓░░░░░░░░      ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░  ░░▒▒▓▓▒▒  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▒▒░░░░░░▒▒██████████▒▒░░          ▒▒░░░░▒▒░░      ░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░▒▒░░░░  ░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████████▒▒▒▒▒▒██████████▓▓░░░░        ░░░░░░░░░░░░      ░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░▒▒░░▒▒░░░░  ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████████████████████▓▓░░          ░░░░░░▒▒░░      ░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▒▒░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████████████████████████░░░░        ░░░░░░░░░░        ░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░▒▒▒▒▒▒▓▓██████▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████████████████████████████████▓▓░░          ▒▒▒▒░░░░░░      ░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░▓▓██████▓▓▓▓▓▓▓▓▓▓▓▓████████████████████████████████████████░░            ▒▒▒▒▒▒░░  ░░░░    ░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░▒▒▒▒████████▓▓▓▓▓▓▓▓████████████████████████████████████████▒▒▒▒░░          ░░▒▒▒▒░░  ░░        ▒▒░░░░░░░░░░
░░░░░░░░░░░░▒▒▒▒▒▒▒▒▓▓████████▓▓██████████████████████████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░        ░░░░▒▒▒▒▒▒░░░░    ░░▒▒▒▒▒▒░░░░░░░░
░░░░░░░░░░░░▒▒░░▒▒▒▒░░▒▒▓▓██████████████████████████████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░            ▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒██████████████████████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓░░  ░░        ▒▒▒▒▒▒░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░
░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒██████████████████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░        ▒▒▒▒▒▒░░▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒░░

*/
// Aryan Pathania
// National Institute of Technology, Hamirpur
// Codeforces - https://codeforces.com/profile/aryanpathania
// LinkedIn https://www.linkedin.com/in/aryanpathania03/