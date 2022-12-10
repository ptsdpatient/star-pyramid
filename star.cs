using System;
namespace pyramid{
    class star{
        public static void Main(string[] args){
           int m=6,n=6;
            for(int i=0;i<13;i++){
                for(int j=0; j<13;j++){
                    if(j<6 && j>=m || j>=6 && j<=n){               
                    Console.Write(" * ");} else Console.Write("   ");
                }
                Console.WriteLine(" ");
                if(i%2==1){
                    m--;
                    n++;
                }
                
            }
        }
    }
}