#include <cstdio>

int a[8010],n,q;

void c_sort(int x){
    for(int i=1;i<=n;i++){
        for(int j=i;j>=2;j--){
            if(a[j]<a[j-1]){
                int tmp=a[j-1];
                a[j-1]=a[j];
                a[j]=tmp;
                if(x==j) x=j-1;
            }
        }
    }
    printf("%d\n",x);
}
int main(){
    freopen("sort.in","r",stdin);
    freopen("sort.out","w",stdout);
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    while(q){
        int type,x,u;
        scanf("%d",&type);
        if(type==1){
            scanf("%d%d",&x,&u);
            a[x]=u;
        }
        if(type==2){
            scanf("%d",&x);
            c_sort(x);
        }
        q--;
    }
    return 0;
}
