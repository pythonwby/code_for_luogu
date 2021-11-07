/*
   2067£º¡¾Àý2.5¡¿Ô²
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-06 15:49:16
 * @LastEditTime: 2021-11-06 15:55:18
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2067.cpp
 */
#include <cstdio>

const double p=3.1415926;
double r,d,c,s;

int main(){
    scanf("%lf",&r);
    d=r*2;
    c=2*p*r;
    s=p*r*r;
    printf("%.4lf %.4lf %.4lf\n",d,c,s);
    system("pause");
    return 0;
}