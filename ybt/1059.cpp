/*
   1059：求平均年龄
 * @Autor: 乌搏猿
 * @Date: 2021-11-15 21:26:04
 * @LastEditTime: 2021-11-15 21:27:56
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1059.cpp
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
    printf("%.2lf\n",ans);
    system("pause");
    return 0;
}