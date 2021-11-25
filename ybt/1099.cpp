/*
   1099：第n小的质数
 * @Autor: 乌搏猿
 * @Date: 2021-11-25 20:36:03
 * @LastEditTime: 2021-11-25 20:39:38
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1099.cpp
 */
#include <cstdio>

int n,ans,cnt=0,a=2;

bool zs(int x){
    if(x<=1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    scanf("%d",&n);
    while(cnt<n){
        if(zs(a)){
            cnt++;
            ans=a;
        }
        a++;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}