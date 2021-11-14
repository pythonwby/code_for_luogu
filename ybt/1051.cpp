/*
   1051£º·Ö¶Îº¯Êý
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 14:35:12
 * @LastEditTime: 2021-11-14 14:40:25
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1051.cpp
 */
#include <cstdio>

double x;

int main(){
    scanf("%lf",&x);
    if(x>=0&&x<5) printf("%.3lf\n",-x+2.5);
    if(x>=5&&x<10) printf("%.3lf\n",2-1.5*(x-3)*(x-3));
    if(x>=10&&x<20) printf("%.3lf\n",x/2-1.5);
    system("pause");
    return 0;
}