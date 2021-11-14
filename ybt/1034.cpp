/*
   1034：计算三角形面积
 * @Autor: 乌搏猿
 * @Date: 2021-11-07 13:26:35
 * @LastEditTime: 2021-11-08 21:26:49
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1034.cpp
 */
#include <cstdio>
#include <cmath>

double xa,xb,xc,ya,yb,yc,a,b,c;

double jl(double xa,double ya,double xb,double yb){return sqrt(pow(xa-xb,2)+pow(ya-yb,2));}
double s(double a,double b,double c){
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
    a=jl(xa,ya,xb,yb);
    b=jl(xb,yb,xc,yc);
    c=jl(xc,yc,xa,ya);
    printf("%.2lf\n",s(a,b,c));
    system("pause");
    return 0;
}