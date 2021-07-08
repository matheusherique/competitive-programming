#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, nn;
    string n;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &nn);

        nn=(((nn*567/9)+7492)*235/47)-498;

        if(nn<0)
            nn*=-1;

        n = to_string(nn);
        n = n[n.length() - 2];

        printf("%s\n", n.c_str());
    }

    return 0;
}