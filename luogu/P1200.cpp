/*
   P1200 [USACO1.1]��ķɵ������Your Ride Is Here
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-04 11:35:30
 * @LastEditTime: 2021-10-04 13:36:41
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1200.cpp
 */
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

//a:��������,b:С������
string a,b;
//as:��������,bs:С������
int as=1,bs=1;

int main_1200(){
    cin>>a>>b;
    for(int i=0;i<a.length();i++) as*=a[i]-'A'+1;
    for(int i=0;i<b.length();i++) bs*=b[i]-'A'+1;
    as%=47;
    bs%=47;
    if(as==bs) printf("GO\n");
    else printf("STAY\n");
    system("pause");
    return 0;
}