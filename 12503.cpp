#include <bits/stdc++.h>

using namespace std;


int main(){
    int t,n;
    string s;

    scanf("%d\n", &t);

    while (t--){
        vector<int> p;
        scanf("%d\n", &n);
        while(n--){
            getline(cin, s);
            if(s[0]=='L')
                p.push_back(-1);
            else if(s[0]=='R')
                p.push_back(1);
            else
                p.push_back(p[atoi(s.substr(8).c_str())-1]);
        }
        printf("%d\n", accumulate(p.begin(), p.end(), 0));

    }
    
    return 0;
}