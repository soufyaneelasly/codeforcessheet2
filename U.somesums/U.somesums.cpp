#include<iostream>

using namespace std;
int somedgt(int x){
int rslt = 0;
while(x>0){
rslt+=x%10;
x/=10;
}
return rslt ;

}

int main(){

int n,a,b;

cin>>n>>a>>b;
int rslt=0;
for(int i=1;i<=n;i++){


    if((somedgt(i)<=b)&&(somedgt(i)>=a)){
    rslt+=i;
    }

}
cout<<rslt<<endl;

}





