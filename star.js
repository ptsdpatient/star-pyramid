let i,j,m=6,n=6;
for(i=0;i<13;i++){
    for(j=0;j<13;j++){
        if(j<=6 && m<=j || j>=6 && j<=n){
        process.stdout.write(" * ");}
        else {
            process.stdout.write("   ");
        }
    }
    if(i%2==0){
        m--;
        n++;
    }
    console.log(" ");
}