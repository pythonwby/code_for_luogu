/*
   1048：有一门课不及格的学生
 * @Autor: 乌搏猿
 * @Date: 2021-11-14 13:32:30
 * @LastEditTime: 2021-11-14 13:34:06
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1048.cpp
 */
#include <cstdio>

int a,b;

int main(){
    scanf("%d%d",&a,&b);
    if((a<60&&b>59)||(a>59&&b<60)) printf("1\n");
    else printf("0\n");
    system("pause");
    return 0;
}