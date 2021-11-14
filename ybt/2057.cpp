/*
   2057£º¡¾Àý3.9 ¡¿ÐÇÆÚ¼¸
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 13:35:57
 * @LastEditTime: 2021-11-14 13:43:29
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2057.cpp
 */
#include <cstdio>

int a;

int main(){
    scanf("%d",&a);
    switch(a){
        case 1:printf("Monday\n");break;
        case 2:printf("Tuesday\n");break;
        case 3:printf("Wednesday\n");break;
        case 4:printf("Thursday\n");break;
        case 5:printf("Friday\n");break;
        case 6:printf("Saturday\n");break;
        case 7:printf("Sunday\n");break;
        default:printf("input error!\n");
    }
    system("pause");
    return 0;
}