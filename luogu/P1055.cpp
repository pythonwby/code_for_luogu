/*
   P1055 [NOIP2008 普及组] ISBN 号码
 * @Autor: 乌搏猿
 * @Date: 2021-09-29 20:52:33
 * @LastEditTime: 2021-09-29 21:41:11
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1055.cpp
 */
#include <cstdio>

//a:正确识别码
int a=0;
char input[14];

int main_1055(){
    scanf("%s",input);
    int tmp=1;
    for(int i=0;i<12;i++){
        if(input[i]=='-') continue;
        a+=(input[i]-'0')*tmp;
        tmp++;
    }
    a%=11;
    if(a==(input[12]=='X'?10:input[12]-'0')) printf("Right\n");
    else{
        for(int i=0;i<12;i++) printf("%c",input[i]);
        if(a==10) printf("X\n");
        else printf("%d\n",a);
    }
    system("pause");
    return 0;
}