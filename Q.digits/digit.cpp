#include<iostream>

using namespace std;


int main(){

int n;
cin>>n;

for(int i=1;i<=n;i++){


string nmbre;
cin>>nmbre;
int sz=nmbre.size();
for(int a=sz-1;a>=0;a--){

cout<<nmbre[a]<<" ";
}
cout<<endl;
}
}
