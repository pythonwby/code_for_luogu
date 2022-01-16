#include <cstdio>
 
double a,b,c,m;
 
double max(double x,double y,double z){
    if(x>y&&x>=z) return x;
    if(y>=x&&y>=z) return y;
    if(z>=y&&z>=x) return z;
}
int main(){
    scanf("%lf%lf%lf",&a,&b,&c);
    m=max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));
    printf("%.3lf\n",m);
    return 0;
}
