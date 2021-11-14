/*
   2055£º¡¾Àý3.5¡¿ÊÕ·Ñ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-08 21:48:24
 * @LastEditTime: 2021-11-08 21:58:27
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2055.cpp
 */
#include <cstdio>

double a;

int main(){
    scanf("%lf",&a);
    if(a<=20) printf("%.2lf\n",a*1.68);
    else printf("%.2lf\n",33.6+1.98*(a-20));
    system("pause");
    return 0;
}