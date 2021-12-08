/*
   1131：基因相关性
 * @Autor: 乌搏猿
 * @Date: 2021-12-08 19:48:37
 * @LastEditTime: 2021-12-08 19:53:14
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1131.cpp
 */
#include <cstdio>
#include <cstring>

bool flag;
char a[510],b[510];
double fz;
int cnt;

int main(){
    scanf("%lf",&fz);
    scanf("%s\n%s",a,b);
    for(int i=0;i<strlen(a);i++){
        if(a[i]==b[i]) cnt++;
    }
    if(cnt*1.0/strlen(a)*1.0>=fz) flag =true;
    if(flag) printf("yes\n");
    else printf("no\n");
    system("pause");
    return 0;
}