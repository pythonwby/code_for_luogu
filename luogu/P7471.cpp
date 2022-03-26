/*
   P7471 [NOI Online 2021 ÈëÃÅ×é] ÇÐµ°¸â
 * @Autor: ÎÚ²«Ô³
 * @Date: 2022-03-26 10:44:20
 * @LastEditTime: 2022-03-26 11:29:37
 * @state: Other
 * @FilePath: \code_for_luogu\luogu\P7471.cpp
 */
#include <algorithm>
#include <cstdio>
using namespace std;

int n,a[5];

int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        if(a[0]==0&&a[1]==0){
            printf("0\n");
            continue;
        }
        if(a[0]==0&&a[1]==a[2]){
            printf("1\n");
            continue;
        }
        if(a[0]==a[1]){
            printf("2\n");
            continue;
        }
        if(a[1]==a[2]){
            printf("2\n");
            continue;
        }
        if(a[0]==0&&a[1]!=a[2]){
            printf("2\n");
            continue;
        }
        if(a[0]==a[1]&&a[2]==a[1]){
            printf("2\n");
            continue;
        }
        if(a[0]!=0&&a[0]==a[1]){
            printf("2\n");
            continue;
        }
        if(a[0]!=0&&a[0]+a[1]==a[2]){
            printf("2\n");
            continue;
        }
        printf("3\n");
    }
    //system("pause");
    return 0;
}