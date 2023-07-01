#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Sort {
public:
    char s1[100000];
    int endflag=0;
    void scanString() {
        for(int i=0;i<999;i++){
            if(s1[i]=='.')
            {
                endflag=1;
                break;
            }
            if(endflag==0){
                cin >> s1;
                int len=strlen(s1);
                if(s1[len-1]!='.')
                    cout << strlen(s1) << " ";
                if(s1[len-1]=='.'){
                    cout << strlen(s1)-1 << endl;
                    break;
                }
            }
            if(endflag==1){
                break;
            }
        }
    }

};

int main() {
    Sort sor;
    sor.scanString();
    return 0;
}
