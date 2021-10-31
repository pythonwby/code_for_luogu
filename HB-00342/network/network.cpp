#include <iostream>
#include <string>
using namespace std;

//scnt:server_cnt
int n,scnt=0;
string server_dz[1010];

bool hf(string dz){
    char tc;
    int n1=0,n2=0,n3=0,n4=0,n5=0,idxn=0;
    while(tc!='.'){
        n1*=10;
        n1+=dz[idxn]-'0';
        tc=dz[idxn++];
    }
    tc=dz[idxn];
    while(tc!='.'){
        n2*=10;
        n2+=dz[idxn]-'0';
        tc=dz[idxn++];
    }
    tc=dz[idxn];
    while(tc!='.'){
        n3*=10;
        n3+=dz[idxn]-'0';
        tc=dz[idxn++];
    }
    tc=dz[idxn];
    while(tc!=':'){
        n4*=10;
        n4+=dz[idxn]-'0';
        tc=dz[idxn++];
    }
    tc=dz[idxn];
    while(idxn<dz.length()){
        n5*=10;
        n5+=dz[idxn++]-'0';
    }
    if(n1<256&&n2<256&&n3<256&&n4<256&&n5<65536) return true;
    return false;
}
//return 1000:OK 2000:FAIL 3000:ERR
int server(string dz){
    if(hf(dz)) return 3000;
    for(int i=0;i<scnt;i++){
        if(server_dz[i]==dz){
            return 2000;
        }
    }
    server_dz[scnt++]=dz;
    return 1000;
}
int client(string dz){
    if(hf(dz)) return 3000;
    for(int i=0;i<scnt;i++){
        if(server_dz[i]==dz) return i;
    }
    return 2000;
}
int main(){
    freopen("network.in","r",stdin);
    freopen("network.out","w",stdout);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp;
        string type,dz;
        cin>>type>>dz;
        if(type=="Server") tmp=server(dz);
        if(type=="Client") tmp=client(dz);
        if(tmp==1000) printf("OK\n");
        else if(tmp==2000) printf("FAIL\n");
        else if(tmp==3000) printf("ERR\n");
        else printf("%d\n",tmp+1);
    }
    return 0;
}
