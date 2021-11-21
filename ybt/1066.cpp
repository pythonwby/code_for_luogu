/*
   1066：满足条件的数累加
 * @Autor: 乌搏猿
 * @Date: 2021-11-17 20:13:00
 * @LastEditTime: 2021-11-17 20:18:19
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1066.cpp
 */
#include <cstdio>

int n,m,ans;

int main(){
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++) if(i%17==0) ans+=i;
    printf("%d\n",ans);
    system("pause");
    return 0;
}