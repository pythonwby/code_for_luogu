/*
   1050：骑车与走路
 * @Autor: 乌搏猿
 * @Date: 2021-11-14 14:28:29
 * @LastEditTime: 2021-11-14 14:33:41
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1050.cpp
 */
#include <cstdio>

double a;

int main(){
    scanf("%lf",&a);
    if(50+a/3>a/1.2) printf("Walk\n");
    if(50+a/3==a/1.2) printf("All\n");
    if(50+a/3<a/1.2) printf("Bike\n");
    system("pause");
    return 0;
}