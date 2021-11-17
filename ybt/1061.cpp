/*
   1061：求整数的和与均值
 * @Autor: 乌搏猿
 * @Date: 2021-11-15 21:30:05
 * @LastEditTime: 2021-11-15 21:31:26
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1061.cpp
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
    printf("%.0lf ",ans);
    ans/=n;
    printf("%.5lf\n",ans);
    system("pause");
    return 0;
}