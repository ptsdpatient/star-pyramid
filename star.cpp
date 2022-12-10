#include<iostream>
using namespace std;
int main(){
    int m=6,n=6;
    for(int i=0;i<14;i++)
    { 
      for(int j=0;j<16;j++)
    {
          if(j<6 && m<=j || j>=6 && j<=n){
            cout<<" * ";
          }else{
            cout<<"   ";
              }  
       
    }
    if(i%2==1) {m--;n++;}
     cout<<endl;
   }


return 0;}