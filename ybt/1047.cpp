/*
   1047���ж��ܷ�3��5��7����
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-14 13:25:39
 * @LastEditTime: 2021-11-14 13:32:02
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1047.cpp
 */
#include <cstdio>

int a;

int main(){
    scanf("%d",&a);
    if(a%3==0&&a%5==0&&a%7==0) printf("3 5 7\n");
    if(a%3!=0&&a%5==0&&a%7==0) printf("5 7\n");
    if(a%3==0&&a%5!=0&&a%7==0) printf("3 7\n");
    if(a%3==0&&a%5==0&&a%7!=0) printf("3 5\n");
    if(a%3==0&&a%5!=0&&a%7!=0) printf("3\n");
    if(a%3!=0&&a%5==0&&a%7!=0) printf("5\n");
    if(a%3!=0&&a%5!=0&&a%7==0) printf("7\n");
    if(a%3!=0&&a%5!=0&&a%7!=0) printf("n\n");
    system("pause");
    return 0;
}