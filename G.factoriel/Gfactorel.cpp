#include<iostream>

using namespace std;



int main(){
long long facto=1;
int a;
cin>> a;
while(a--){
int x;
cin>> x;
for(int i=1;i<=x;i++){
facto*=i;
}
cout<<facto<<endl;
facto=1;
}





}
