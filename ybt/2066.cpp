/*
   2066������2.3����ͼ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-06 15:22:32
 * @LastEditTime: 2021-11-06 15:30:09
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2066.cpp
 */
#include <cstdio>

int n,m;
double xj;

int main(){
    scanf("%d%d",&n,&m);
    xj=m*0.8;
    printf("%.2lf\n",n-xj);
    system("pause");
    return 0;
}