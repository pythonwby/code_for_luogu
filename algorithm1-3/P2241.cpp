/*
   P2241 ͳ�Ʒ��Σ����ݼ�ǿ�棩
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-15 15:29:58
 * @LastEditTime: 2021-08-15 15:39:33
 * @state: Other
 * @FilePath: \code_for_luogu\algorithm1-3\P2241.cpp
 */
//��δ���
#include <cstdio>

//a:�����θ���,b:�����θ���,n:���̳���,m:���̿��
int a,b,n,m;

int main(){
    scanf("%d%d",&n,&m);
    for(int c=0;c<n;c++){
        for(int d=0;d<m;d++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i==j) a++;
                    else b++;
                }
            }
        }
    }
    
    printf("%d %d",a,b);
    system("pause");
    return 0;
}