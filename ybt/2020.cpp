/*
   2020������4.5���ڼ���
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-18 20:41:38
 * @LastEditTime: 2021-11-18 20:53:06
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2020.cpp
 */
#include <cstdio>

int n=1,m,a;

int main(){
    scanf("%d",&m);
    while(a<=m){
        a+=n++;
    }
    printf("%d\n",n-1);
    system("pause");
    return 0;
}