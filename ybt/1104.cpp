/*
   1104£º¼ÆËãÊé·Ñ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-28 10:44:44
 * @LastEditTime: 2021-11-28 10:47:26
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1104.cpp
 */
#include <cstdio>

double zj=0,jg[15]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};

int main(){
    for(int i=0;i<10;i++){
        int tmp;
        scanf("%d",&tmp);
        zj+=jg[i]*tmp;
    }
    printf("%.1lf\n",zj);
    system("pause");
    return 0;
}