#include <cstdio>
#include <cstring>
using namespace std;

bool flag=false;
char a[1000];

int main(){
    while(scanf("%s",a)!=EOF){
        if(!flag){
            flag=true;
        }else printf(",");
        printf("%d",strlen(a));
    }
    printf("\n");
    return 0;
}