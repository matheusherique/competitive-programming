#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    getline(cin, s);

    for(size_t i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]&&s[i]=='s'){
            printf("hiss\n");
            return 0;
        }
    }
    printf("no hiss\n");
    return 0;
}