/*
   1076£ºÕý³£ÑªÑ¹
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-21 09:44:37
 * @LastEditTime: 2021-11-21 09:51:38
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1076.cpp
 */
#include <cstdio>

int n,a,b,c,d;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a>=90&&a<=140&&b>=60&&b<=90){
            c++;
            if(d<c) d=c;
        }
        else c=0;
    }
    if(c>d) d=c;
    printf("%d\n",d);
    system("pause");
    return 0;
}