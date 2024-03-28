#include<iostream>

using namespace std;

int main(){

int counter;

cin>>counter;
int max=0;
for(int i=0;i<counter;i++){
int n;
cin>>n;
if(n>max){
max=n;
}

}

cout<<max<<endl;

}
