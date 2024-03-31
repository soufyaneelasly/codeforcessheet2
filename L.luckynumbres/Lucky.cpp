#include<iostream>
using namespace std ;



int tcheker(int x){

int rs=0;
int rss=0;
int ten=10;                                                                                                                                                                                                        

            

while(x>0){
           
rs=x%10;
if (rs==7 || rs==4){
    
    rss=ten+rss;
   
}else{
                  
rss=0;
break;
}
ten=ten*10;
x/=10; 
}                                                                                                                                                                                                                  
                                                                                                                                                                                                                
return rss;
}

int main(){
int value=0;
int x;
int y;
cin>>x>>y;

for(int i=x;i<=y;i++){
if (tcheker(i)>0){
cout<<i<<" ";
value=1;
}else if(value==0 && i==y){
cout<<"-1"<<endl;
}


}




}
