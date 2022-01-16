#include <cstdio>
 
int n;
 
int main(){
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int cnt=0;
        for(int j=1;j<i;j++){
            if(i%j==0) cnt+=j;
        }
        if(cnt==i) printf("%d\n",i);
    }
    return 0;
}