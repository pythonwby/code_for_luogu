/*
   1112：最大值和最小值的差
 * @Autor: 乌搏猿
 * @Date: 2021-12-01 20:34:07
 * @LastEditTime: 2021-12-01 20:36:52
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1112.cpp
 */
#include <cstdio>

int a[10010],m,max=-2100000000,min=2100000000;

int main(){
    scanf("%d",&m);
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("%d\n",max-min);
    system("pause");
    return 0;
}