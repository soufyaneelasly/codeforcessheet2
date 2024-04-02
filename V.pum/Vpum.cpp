#include<iostream>
using namespace std;

int main(){

int n ;
cin>> n;
int kk=-3;
for(int i=1;i<=n;i++){
for(int j=kk+4;j<kk+8;j++){
    if(j%4==0){
cout<<"PUM";
    }else{
    cout<<j<<" ";
    }
}
cout<<endl;
kk+=4;

}

}
