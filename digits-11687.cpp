#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;

    while(getline(cin, s), s!="END"){
        unsigned long long i=0, x=-1;

        if(s=="1")
            printf("1\n");
        else {
            while(1){
                if(s.size()!=x){
                    ++i;
                    s=to_string(s.size());
                    x=stoi(s);
                } else{
                    ++i;
                    break;
                }
            }

            printf("%lld\n", i);
        }

    }
    
    return 0;
}