/*
   P1423 С������Ӿ
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-25 14:44:27
 * @LastEditTime: 2021-09-25 14:51:54
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1423.cpp
 */
#include <cstdio>

//x:Ҫ�εľ���,a:��ǰ��һ�����εľ���
double x,a=2,ans;

int main_1423(){
    scanf("%lf",&x);
    for(ans=0;x>0;ans++){
        x-=a;
        a*=0.98;
    }
    printf("%.0lf\n",ans);
    system("pause");
    return 0;
}