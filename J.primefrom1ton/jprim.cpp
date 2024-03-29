#include<iostream>

using namespace std;

int main(){


int n;

cin>>n;

for(int i=2;i<=n;i++){
for(int j=2;j<=(i/2)+1;j++){
if(i%j==0 && i!=2){
break;
}else if(i==2|| (((i%j)!=0)&& j==(i/2)+1)){

cout<<i<<" ";

}
}

}
}
