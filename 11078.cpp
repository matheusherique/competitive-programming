#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;

    while(scanf("%d", &T)!=EOF){
        int n, ans;
        vector <int> s;
        while(T--){
            scanf("%d", &n);
            s.push_back(n);
        }
        
        int it = *max_element(s.begin(), s.end()-1);
        printf("%d\n", it-s[s.size()-1]);
    }
    return 0;
}