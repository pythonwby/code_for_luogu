/*
   P2241 ͳ�Ʒ��Σ����ݼ�ǿ�棩
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-15 15:29:58
 * @LastEditTime: 2021-08-15 16:32:56
 * @state: Other
 * @FilePath: \code_for_luogu\algorithm1-3\P2241.cpp
 */
//���ݽϴ󣬲��� long long int ���ͷ�ֹ���������
#include <cstdio>

//a:�����θ���,b:�����θ���,n:���̳���,m:���̿��
long long int a,b,n,m;

int main_2241(){
    scanf("%d%d",&n,&m);
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<m;j++){
            if(i==j) a+=(n-i)*(m-j);
            else b+=(n-i)*(m-j);
         }
    }
    printf("%lld %lld\n",a,b);
    system("pause");
    return 0;
}