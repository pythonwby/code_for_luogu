/*
   P1426 С�����Σ����
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-07 10:31:08
 * @LastEditTime: 2021-10-07 11:04:18
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1426.cpp
 */
#include <cstdio>

//l,r����̽���������̽�⵽�ķ�Χ,a����ǰС����ξ���
double s,x,l,r,a=7;
bool flag=true;

int main_1426(){
    scanf("%lf%lf",&s,&x);
    l=s-x;
    r=s+x;
    for(int i=0;;i+=a,a*=0.98){
        if(i>r){
            flag=false;
            break;
        }
        if(i<=r&&i>=l){
            if(i+a<=r){
                break;
            }else{
                flag=false;
                break;
            }
        }
    }
    if(flag) printf("y\n");
    else printf("n\n");
    system("pause");
    return 0;
}