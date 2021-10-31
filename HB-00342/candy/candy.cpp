#include <cstdio>

int n,l,r,maxn=0;

int main(){
    freopen("candy.in","r",stdin);
    freopen("candy.out","w",stdout);
    scanf("%d%d%d",&n,&l,&r);
    for(int i=l;i<=r;i++){
        if(maxn==n-1) break;
        if(i%n==0) continue;
        int tmp=i;
        while(tmp>=n){
            tmp-=n;
        }
        if(tmp>maxn) maxn=tmp;
    }
    printf("%d\n",maxn);
    return 0;
}
