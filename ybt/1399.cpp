#include <iostream>
using namespace std;
 
int n,cnt;
 
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        string tmp;
        double tw;
        int ks;
        cin>>tmp>>tw>>ks;
        if(tw>=37.5&&ks==1){
            cout<<tmp<<endl;
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}