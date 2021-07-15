#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    scanf("%d",&n);
    getline(cin, s);
    while(n--){
        int sum=0, c=0;
        getline(cin, s);
        for(int i=0; i<s.size(); i++){
            s[i]=='O'?++c:c=0;
            sum+=c;
        }
        printf("%d\n", sum);
    }
    return 0;
}