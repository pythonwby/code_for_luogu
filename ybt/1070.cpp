/*
   1070：人口增长
 * @Autor: 乌搏猿
 * @Date: 2021-11-17 20:26:32
 * @LastEditTime: 2021-11-17 20:28:07
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1070.cpp
 */
#include <cstdio>

double n,ans;

int main(){
    scanf("%lf%lf",&ans,&n);
    for(int i=0;i<n;i++) ans*=1.001;
    printf("%.4lf\n",ans);
    system("pause");
    return 0;
}