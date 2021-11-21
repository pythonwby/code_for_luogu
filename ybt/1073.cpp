/*
   1073£º¾ÈÔ®
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 09:29:01
 * @LastEditTime: 2021-11-21 09:41:47
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1073.cpp
 */
#include <cstdio>
#include <cmath>

int n;
double x,y,a,fz;

double jl(double xa,double ya,double xb,double yb){return sqrt(pow(xa-xb,2)+pow(ya-yb,2));}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf%lf%lf",&x,&y,&a);
        fz+=a*1.5;
        fz+=jl(0.0,0.0,x,y)/25;
    }
    printf("%d\n",(int)ceil(fz));
    system("pause");
    return 0;
}