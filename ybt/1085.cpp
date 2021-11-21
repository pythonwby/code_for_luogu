/*
   1085：球弹跳高度的计算
 * @Autor: 乌搏猿
 * @Date: 2021-11-21 14:53:26
 * @LastEditTime: 2021-11-21 14:57:29
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1085.cpp
 */
#include <cstdio>

double n,ans;

int main(){
    scanf("%lf",&n);
    for(int i=0;i<10;i++){
        ans+=n;
        n/=2;
        ans+=n;
    }
    ans-=n;
    printf("%g\n%g\n",ans,n);
    system("pause");
    return 0;
}