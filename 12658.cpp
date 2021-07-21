#include <bits/stdc++.h>

using namespace std;
char one[]=".*..", two[]="*...", three[]="..*.";

int main(){
    int n, c=4;
    string s, a="";

    scanf("%d\n", &n);
    
    while(c--)
        getline(cin, s);

    for(size_t i=0; i<n*4; i+=4){
        if(s.substr(i, 4)==one){
            a+=to_string(1);
        }
        if(s.substr(i, 4)==two){
            a+=to_string(2);
        }
        if(s.substr(i, 4)==three){
            a+=to_string(3);
        }
    }

    printf("%s\n", a.c_str());
    

}