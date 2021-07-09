#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned int g,s,c, sum;

    scanf("%d %d %d", &g,&s,&c);

    string v, t;

    g*=3;
    s*=2;

    sum = g + s + c;

    if (sum >= 8){
        v = "Province";
    } else if (sum >= 5) {
        v = "Duchy";
    } else if (sum >= 2)
        v = "Estate";

    if (sum >= 6)
        t = "Gold";
    else if (sum >= 3)
        t = "Silver";
    else
        t = "Copper";

    if(v != "")
        printf("%s or %s\n", v.c_str(), t.c_str());
    else
        printf("%s\n", t.c_str());
    return 0;
}