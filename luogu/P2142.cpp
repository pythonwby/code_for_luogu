/*
   P2142 高精度减法
 * @Autor: 乌搏猿
 * @Date: 2021-10-14 21:18:59
 * @LastEditTime: 2021-10-14 21:47:56
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P2142.cpp
 */
#include <bits/stdc++.h>
using namespace std;

//a,b代表两个数
string a,b;
int na[15000],nb[15000],nc[15000],maxlength;
//fs:记录答案是否为负数
bool fs=false;

int main_1242(){
	cin>>a>>b;
	if((a<b&&a.length()==b.length())||a.length()<b.length()){
		fs=true;
		swap(a,b);
	}
	for(int i=a.length()-1;i>-1;i--) na[i]=a[a.length()-i-1]-'0';
	for(int i=b.length()-1;i>-1;i--) nb[i]=b[b.length()-i-1]-'0';
	maxlength=max(a.length(),b.length());
	for(int i=0;i<maxlength;i++){
		if(nb[i]>na[i]){
			na[i+1]--;
			na[i]+=10;
		}
		nc[i]=na[i]-nb[i];
	}
	while(nc[maxlength-1]==0&&maxlength>1) maxlength--;
	if(fs) printf("-");
	for(int i=maxlength-1;i>-1;i--) printf("%d",nc[i]);
	if(maxlength==0) printf("0");
	printf("\n");
	system("pause");
	return 0;
}