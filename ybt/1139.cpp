#include <cstdio>
#include <cstring>
using namespace std;

int n;
char ym[25];

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",ym);
        if(ym[0]>='a'&&ym[0]<='z') ym[0]-='a'-'A';
        for(int j=1;j<strlen(ym);j++){
            if(ym[j]>='A'&&ym[j]<='Z') ym[j]+='a'-'A';
        }
        printf("%s\n",ym);
    }
    return 0;
}