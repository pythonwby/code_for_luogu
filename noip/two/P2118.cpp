/*
   P2118 [NOIP2014 �ռ���] ������
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-30 18:14:53
 * @LastEditTime: 2021-08-30 18:33:36
 * @state: Other
 * @FilePath: \code_for_luogu\noip\two\P2118.cpp
 */
//��δ��ɣ�����
#include <cstdio>
#include <algorithm>
using namespace std;

int a,b,c;

int main(){
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d\n",a/__gcd(a,b),b/__gcd(a,b));
    system("pause");
    return 0;
}