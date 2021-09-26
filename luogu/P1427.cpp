/*
   P1427 小鱼的数字游戏
 * @Autor: 乌搏猿
 * @Date: 2021-09-26 21:14:35
 * @LastEditTime: 2021-09-26 21:22:04
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1427.cpp
 */
#include <cstdio>

//a:记录小鱼要记的数字,cnt:记录项目数
int a[200],cnt=0;

int main_1427(){
    for(cnt=0;;cnt++){
        scanf("%d",&a[cnt]);
        if(a[cnt]==0) break;
    }
    for(cnt-=1;cnt>=0;cnt--) printf("%d ",a[cnt]);
    printf("\n");
    system("pause");
    return 0;
}