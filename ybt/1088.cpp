/*
   1088�����������ĸ�����
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-21 15:02:23
 * @LastEditTime: 2021-11-21 15:03:26
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1088.cpp
 */
#include <cstdio>

int n;

int main(){
    scanf("%d",&n);
    while(n>0){
        printf("%d ",n%10);
        n/=10;
    }
    printf("\n");
    system("pause");
    return 0;
}