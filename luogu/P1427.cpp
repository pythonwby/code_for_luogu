/*
   P1427 С���������Ϸ
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-26 21:14:35
 * @LastEditTime: 2021-09-26 21:22:04
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1427.cpp
 */
#include <cstdio>

//a:��¼С��Ҫ�ǵ�����,cnt:��¼��Ŀ��
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