#include<iostream>

using namespace std;


int main(){


int a,b;

cin>>a>>b;
int commun=0;
for(int i=1 ;i<=max(a,b);i++){

    if(((a%i)==0)&&((b%i)==0)){

        commun=i;

    }



}

cout<<commun<<endl;


}
