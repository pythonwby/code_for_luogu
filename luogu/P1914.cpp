/*
   P1914 Ğ¡ÊéÍ¯¡ª¡ª¿­ÈöÃÜÂë
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-10-04 14:01:27
 * @LastEditTime: 2021-10-04 14:19:25
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1914.cpp
 */
#include <cstdio>

//a:ÊäÈë×Ö·û´®
char a[100];
int n;

int lenstr(char x[]){
    int y=(sizeof (x))/(sizeof x[0]),sum=0;
    for(int i=0;i<y&&x[i]!='\0';i++) sum++;
    return sum;
}
int main_1914(){
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=0;i<lenstr(a);i++){
        if(a[i]+n>'z') a[i]-=26;
        a[i]+=n;
    }
    printf("%s\n",a);
    system("pause");
    return 0;
}