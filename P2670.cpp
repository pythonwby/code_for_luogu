/********************************
P2670	[NOIP2015 普及组] 扫雷游戏
********************************/
#include <iostream>
using namespace std;

int a[110][110];
char t;
int n,m;

int main(){
    //注释的代码是调试时写的，没删
    scanf("%d%d",&n,&m);
    /*******************
    printf("n\tm\n%d\t%d\n\n\n",n,m);
    printf("  i\tj\tt");
    ********************/
   //读入
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>t;
            if(t=='*') a[i][j]=1;
            /********************
            printf("  %d\t%d\t%c\n",i,j,t);
            *********************/
        }
    }
    //扫雷
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]){
                printf("*");
                continue;
            }
            printf("%d",a[i-1][j-1]+a[i][j-1]+a[i+1][j-1]+
            a[i-1][j]+a[i+1][j]+a[i-1][j+1]+a[i][j+1]+a[i+1][j+1]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}