#include<iostream>

using namespace std;
int positive=0,negative=0,odd=0,even=0;



int main(){
int counter ;
int positive=0,negative=0,odd=0,even=0;

cin >>counter;
for(int i=1;i<=counter;i++){

int num;
cin>>num;

if(num%2==0){
even++;
}else{
odd++; 
}
if(num>0){
positive++;
}else if(num<0){
negative++;
}
}

cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<positive<<endl;
cout<<"Negative: "<<negative<<endl;

    






}
