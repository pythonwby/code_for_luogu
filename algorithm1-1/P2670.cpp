/* 
   P2670 [NOIP2015 �ռ���] ɨ����Ϸ
 * @Author: �ڲ�Գ
 * @Date: 2021-08-12 15:48:29
 * @LastEditTime: 2021-08-13 17:23:03
 * @state: Accepted
 * @FilePath: \code_for_luogu\algorithm1-1\P2670.cpp
 */
//ע�͵Ĵ����ǵ���ʱд�ģ�ûɾ
#include <iostream>
using namespace std;

int a[110][110];
char t;
int n,m;

int main_2670(){
    scanf("%d%d",&n,&m);
    /*******************
    printf("n\tm\n%d\t%d\n\n\n",n,m);
    printf("  i\tj\tt");
    ********************/
   //����
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>t;
            if(t=='*') a[i][j]=1;
            /********************
            printf("  %d\t%d\t%c\n",i,j,t);
            *********************/
        }
    }
    //ɨ��
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