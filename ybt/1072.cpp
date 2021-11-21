/*
   1072£º¼¦Î²¾ÆÁÆ·¨
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 09:01:43
 * @LastEditTime: 2021-11-21 09:23:00
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1072.cpp
 */
#include <cstdio>

int n;
double a,x,y;

int main(){
    scanf("%d",&n);
    n--;
    scanf("%lf%lf",&x,&y);
    a=y/x;
    for(int i=0;i<n;i++){
        scanf("%lf%lf",&x,&y);
        if(y/x-a>0.05&&y/x>a) printf("better\n");
        else if(a-y/x>0.05&&y/x<a) printf("worse\n");
        else printf("same\n");
    }
    system("pause");
    return 0;
}