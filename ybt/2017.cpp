/*
   2017������4.2�����ż��
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-15 21:18:24
 * @LastEditTime: 2021-11-15 21:19:52
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2017.cpp
 */
#include <cstdio>

int n;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) if(i%2==0) printf("%d ",i);
    printf("\n");
    system("pause");
    return 0;
}