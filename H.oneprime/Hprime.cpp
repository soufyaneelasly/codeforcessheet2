#include<iostream>

using namespace std;

int main(){


int c;
cin>>c;
int n=1;
for(int i=2;i<(c/2)+1;i++){ 
if ((c%i)==0){
n=0;       
}
}

if (n){
cout<<"YES";
}else{
cout<<"NO";
}
}
