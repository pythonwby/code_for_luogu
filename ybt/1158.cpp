#include <cstdio>

int n,cnt;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cnt+=i;
    }
    printf("%d\n",cnt);
    return 0;
}