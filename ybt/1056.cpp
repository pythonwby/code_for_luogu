/*
   1056：点和正方形的关系
 * @Autor: 乌搏猿
 * @Date: 2021-11-14 15:08:48
 * @LastEditTime: 2021-11-15 21:09:20
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1056.cpp
 */
#include <cstdio>

struct node{
    int x,y;
};
node a,b,c,d,n;

int main(){
    a.x=1;
    a.y=-1;
    b.x=1;
    b.y=1;
    c.x=-1;
    c.y=-1;
    d.x=-1;
    d.y=1;
    scanf("%d%d",&n.x,&n.y);
    if(n.x<=a.x&&n.x>=c.x&&n.y>=a.y&&n.y<=b.y) printf("yes\n");
    else printf("no\n");
    system("pause");
    return 0;
}