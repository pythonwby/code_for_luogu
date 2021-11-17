/*
   1060£º¾ùÖµ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-15 21:29:07
 * @LastEditTime: 2021-11-15 21:29:08
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1060.cpp
 */
#include <cstdio>

int n;
double ans;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        double tmp;
        scanf("%lf",&tmp);
        ans+=tmp;
    }
    ans/=n;
    printf("%.4lf\n",ans);
    system("pause");
    return 0;
}