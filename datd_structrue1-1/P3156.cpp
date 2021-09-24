/*
   P3156 [深基15.例1] 询问学号
 * @Autor: 乌搏猿
 * @Date: 2021-08-18 14:59:34
 * @LastEditTime: 2021-09-24 21:58:04
 * @state: AC
 * @FilePath: \code_for_luogu\datd_structrue1-1\P3156.cpp
 */
#include <cstdio>

//a:存放学号的数组
int n,m,a[2000010];

int main_3156(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    while(m--){
        int x;
        scanf("%d",&x);
        printf("%d\n",a[x-1]);
    }
    system("pause");
    return 0;
}