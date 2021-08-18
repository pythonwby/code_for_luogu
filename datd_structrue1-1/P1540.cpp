/*
   P1540 [NOIP2010 提高组] 机器翻译
 * @Autor: 乌搏猿
 * @Date: 2021-08-18 15:20:03
 * @LastEditTime: 2021-08-18 16:24:02
 * @state: AC
 * @FilePath: \code_for_luogu\datd_structrue1-1\P1540.cpp
 */
#include <cstdio>
#include <cstring>

//a:文章数组,b:内存数组,c:标记当前应该把新但粗存入内存的位置,d:记录查词典次数
int n,m,a[10010],b[10010],c,d;

//查找数字是否在内存中的函数
bool e(int x){
    for(int i=0;i<m;i++)
        if(b[i]==x) return true;
    return false;
}
//往内存中存入数字的函数
void f(int x){
    if(c+1>=m) c-=m;
    b[++c]=x;
    d++;
}
int main_1540(){
    memset(a,-1,sizeof(a));
    memset(b,-1,sizeof(b));
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) if(!e(a[i])) f(a[i]);
    printf("%d\n",d);
    system("pause");
    return 0;
}