/* 
   P1563 [NOIP2016 �����] �������
 * @Author: �ڲ�Գ
 * @Date: 2021-08-13 09:09:54
 * @LastEditTime: 2021-08-13 16:24:13
 * @FilePath: \code_for_luogu\algorithm1-1\P1563.cpp
 */
//��δ��ɣ�����
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//a:��С�˳���,true����,false����
vector<bool> a;
//b:��С�˹��������֣�
vector<string> b;
//n:С����,m:ָ����,x:����С�˳���,y:ָ�����ߵĲ���,now:��ǰ����ָ���С�˱��
int n,m,x,y,now;
//tempstr:��ʱ�ַ�������
string tempstr;
//tempint:��ʱ���ֱ���
int tempint;

int main(){
    scanf("%d%d",&n,&m);
    //��С����Ϣ
    for(int i=0;i<n;i++){
        cin>>tempint>>tempstr;
        if(tempint) a.push_back(false);
        else a.push_back(true);
        b.push_back(tempstr);
    }
    //����ָ�ִ��
    while(m--){
        scanf("%d%d",&x,&y);
        if(a[now]==true&&x==0) now=(now+n-y)%n;
        else if(a[now]==true&&x==1) now=(now+y)%n;
        else if(a[now]==false&&x==0) now=(now+y)%n;
        else if(a[now]==true&&x==1) now=(now+n-y)%n;
    }
    cout<<b[now]<<endl;
    system("pause");
    return 0;
}