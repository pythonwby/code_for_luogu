/*
   P1428 С��ȿɰ�
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-27 19:57:54
 * @LastEditTime: 2021-09-27 20:07:19
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1428.cpp
 */
#include <cstdio>

//n:��ʾС������,a:��¼С��Ŀɰ��̶�
int n,a[105];

int main_1428(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int tmp=0;
        for(int j=i-1;j>=0;j--){
            if(a[j]<a[i]) tmp++;
        }
        printf("%d ",tmp);
    }
    printf("\n");
    system("pause");
    return 0;
}