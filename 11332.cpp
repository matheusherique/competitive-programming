#include <bits/stdc++.h>

using namespace std;

int sum(string s){
    int su=0;
    for(int i=0; i<s.size(); i++)
        su+=s[i]-'0';
    if(su>9)
        su=sum(to_string(su));
    
    return su;
}

int main(){
    string s;
    while(getline(cin, s)){
        if(s!="0")
            printf("%d\n",sum(s));
    }

    return 0;
}