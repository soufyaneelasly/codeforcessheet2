#include<iostream>

using namespace std;


int main(){



    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int l=0;l<n-i;l++){ 
cout<<" ";
        }
    for(int j=-0;j<(2*i)-1;j++){
        
        cout<<"*";
    }
cout<<endl;




    }

}
