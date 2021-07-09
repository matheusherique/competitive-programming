#include <bits/stdc++.h>

using namespace std;

int main(){

    int tc,d,m,y1,y2,c;

    char n[30];

    string s;

    scanf("%d", &tc);

    while(tc--){
        scanf("%s %d/%d/%d %d/%d/%d %d", &n,&y1,&m,&d,&y2,&m,&d,&c);

        if(y1 >= 2010 || y2 >= 1991)
            s = "eligible";
        else if (c >= 41)
            s = "ineligible";
        else
            s = "coach petitions";

        printf("%s %s\n", n, s.c_str());
        
    }

    return 0;
}