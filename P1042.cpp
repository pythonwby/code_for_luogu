#include <cstdio>
#include <cmath>

char a[62500],t;
int n,w,l;

int main(){
    while(scanf("%c",&t)&&t!='E') a[n++]=t;
    //11分制
    for(int i=0;i<n;i++){
        if(a[i]=='W') w++;
        else if(a[i]=='L') l++;
        if((w>=11||l>=11)&&abs(w-l)>=2){
            printf("%d:%d\n",w,l);
            w=0;
            l=0;
        }
    }
    printf("%d:%d\n\n",w,l);
    w=0;
    l=0;
    //21分制
    for(int i=0;i<n;i++){
        if(a[i]=='W') w++;
        else if(a[i]=='L') l++;
        if((w>=21||l>=21)&&abs(w-l)>=2){
            printf("%d:%d\n",w,l);
            w=0;
            l=0;
        }
    }
    printf("%d:%d\n",w,l);
    system("pause");
    return 0;
}