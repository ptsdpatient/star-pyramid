#include<iostream>
using namespace std;
int main(){
    int i,j,m=6,n=6;//i is row, j is column,k is var used to determine which element it shouldn't print
    //k ka ab tak istmal hi nahi kar parahahu
    for(i=0;i<14;i++)
    { 
      for(j=0;j<16;j++)
    {
          if(j<6 && m<=j || j>=6 && j<=n){
            cout<<" * ";
          }else{
            cout<<"   ";//giving three spaces for alignment of pyramid
          }  
       
    }
    if(i%2==1) {m--;n++;}//decrement k after every 2 row **(condition) for getting diagonal out of the two halves or something idk my logic just seems to work fine somehow 
     cout<<endl;//end line after each row
   }


return 0;}