m=6
n=6
for i in range(0,14):
    for j in range(0,16):
        if(j<6 and m<=j or j>=6 and j<=n):
            print(" * ", end="")
        else: 
            print("   ",end="")
    print("")
    if(i%2==1):
        m-=1
        n+=1
        