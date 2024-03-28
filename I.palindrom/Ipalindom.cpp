#include<iostream>

using namespace std ;

long long reverse(long long n ){
    long long nn=0 ;
int rs=0;
while(n){
rs= n%10;
nn=nn*10+rs;
n=n/10;
}
return nn;
}





int main(){

long long nn,n;
cin>>n;

nn=reverse(n);
cout<<nn<<endl;
if(nn==n){
cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}

}
