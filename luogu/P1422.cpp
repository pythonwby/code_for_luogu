/*
   P1422 С��ҵĵ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-23 20:23:10
 * @LastEditTime: 2021-09-23 20:51:31
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1422.cpp
 */
#include <cstdio>

//a:���µ���,b:���
double a,b;

int main(){
    scanf("%lf",&a);
    if(a>=151){
        if(a>=401) b=(0.4463*150)+(0.4663*250)+(a-400)*0.5663;
        else b=(150*0.4463)+((a-150)*0.4663);
    }else b=a*0.4463;
    printf("%.1lf\n",b);
    system("pause");
    return 0;
}