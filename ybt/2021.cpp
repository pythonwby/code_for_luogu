/*
   2021：【例4.6】最大公约数
 * @Autor: 乌搏猿
 * @Date: 2021-11-21 11:50:17
 * @LastEditTime: 2021-11-21 14:14:08
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2021.cpp
 */
#include <cstdio>

int n,m,ans=1;

int min(int x,int y){return x<y?x:y;}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=min(n,m);i++){
        if(n%i==0&&m%i==0) ans=i;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}