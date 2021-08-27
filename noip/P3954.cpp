/*
   P3954 [NOIP2017 普及组] 成绩
 * @Autor: 乌搏猿
 * @Date: 2021-08-27 17:20:29
 * @LastEditTime: 2021-08-27 17:23:28
 * @state: AC
 * @FilePath: \code_for_luogu\noip\P3954.cpp
 */
#include <cstdio>

//三个变量分别代表三个成绩
int a,b,c;

int main_3954(){
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",a/10*2+b/10*3+c/10*5);
    system("pause");
    return 0;
}