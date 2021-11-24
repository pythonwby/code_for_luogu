/*
   1092：求出e的值
 * @Autor: 乌搏猿
 * @Date: 2021-11-24 21:02:46
 * @LastEditTime: 2021-11-24 21:07:04
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1092.cpp
 */
#include <cstdio>

double n,e=1;

int main(){
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        long long jc=1;
        for(int j=1;j<=i;j++){
            jc*=j;
        }
        e+=1.0/jc;
    }
    printf("%.10lf\n",e);
    system("pause");
    return 0;
}