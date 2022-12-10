public class star {
public static void main(String[] args) {
	int m=6,n=6;
  for(int i=0;i<14;i++) {
	  for(int j=0;j<16;j++) {
		  if(j<=6 &&j>=m || j>=6 && j<=n) {
		  System.out.print(" *");
	  }else System.out.print("  ");
		  }
	  System.out.println();
	  if(i%2==1) {
		  m--;
		  n++;
	  }
  }
}
}
