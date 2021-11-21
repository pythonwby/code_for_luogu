/*
   2022£º¡¾Àý4.7¡¿×îÐ¡nÖµ
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 14:17:44
 * @LastEditTime: 2021-11-21 14:34:18
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2022.cpp
 */
#include <cstdio>

int m;
double n=1,a;

int main(){
    scanf("%d",&m);
    while(a<m){
        a+=1/n;
        n++;
    }
    printf("%g\n",--n);
    system("pause");
    return 0;
}