#include <bits/stdc++.h>

using namespace std;

int flip(int x){
    string s=to_string(x),j;
    j[0]=s[2];
    j[1]=s[1];
    j[2]=s[0];
    
    return stoi(j);
}

int main(){
    int x, y;

    scanf("%d %d",&x,&y);
    x=flip(x),y=flip(y);

    x>y?printf("%d\n", x):printf("%d\n", y);


    return 0;
}