/*
   P3156 [���15.��1] ѯ��ѧ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-18 14:59:34
 * @LastEditTime: 2021-09-24 21:58:04
 * @state: AC
 * @FilePath: \code_for_luogu\datd_structrue1-1\P3156.cpp
 */
#include <cstdio>

//a:���ѧ�ŵ�����
int n,m,a[2000010];

int main_3156(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    while(m--){
        int x;
        scanf("%d",&x);
        printf("%d\n",a[x-1]);
    }
    system("pause");
    return 0;
}