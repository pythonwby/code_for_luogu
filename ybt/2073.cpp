/*
   2073：【例2.16 】三角形面积
 * @Autor: 乌搏猿
 * @Date: 2021-11-07 11:30:04
 * @LastEditTime: 2021-11-08 20:50:03
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2073.cpp
 */
#include <cstdio>
#include <cmath>

double a,b,c;

int main(){
    scanf("%lf%lf%lf",&a,&b,&c);
    double p=(a+b+c)/2;
    printf("%.3lf\n",sqrt(p*(p-a)*(p-b)*(p-c)));
    system("pause");
    return 0;
}