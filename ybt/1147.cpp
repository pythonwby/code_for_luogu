#include <cstdio>
#include <iostream>
using namespace std;
 
string maxn;
int maxf,n;
 
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        string tmp;
        int tmpf;
        cin>>tmpf>>tmp;
        if(tmpf>maxf){
        maxn=tmp;
            maxf=tmpf;
        }
    }
    cout<<maxn<<endl;
    return 0;
}