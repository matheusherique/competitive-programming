#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n=0;

    while(cin >> s){
        if(s == "#")
            break;
        if(s == "HELLO")
            s = "ENGLISH";
        else if(s == "HOLA")
            s = "SPANISH";
        else if(s == "HALLO")
            s = "GERMAN";
        else if(s == "BONJOUR")
            s = "FRENCH";
        else if(s == "CIAO")
            s = "ITALIAN";
        else if(s == "ZDRAVSTVUJTE")
            s = "RUSSIAN";
        else
            s = "UNKNOWN";
        
        printf("Case %d: %s\n", ++n, s.c_str());

        
    }
    return 0;
}