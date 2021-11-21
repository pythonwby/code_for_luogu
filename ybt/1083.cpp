/*
   1083£º¼ÆËãÐÇÆÚ¼¸
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 10:28:57
 * @LastEditTime: 2021-11-21 10:44:00
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1083.cpp
 */
#include <cstdio>

int a,b,ans;

int main(){
    scanf("%d%d",&a,&b);
    ans=a%7;
    for(int i=1;i<b;i++){
        ans=(ans%7*a%7)%7;
    }
    switch(ans){
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
    }
    system("pause");
    return 0;
}