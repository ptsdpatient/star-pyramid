k=6
for i in range(0,14):
    for j in range(0,16):
        if(k==j):
            print(" * ", end="")
        else: 
            print("  ",end="")
    print("")
    if((i+1)%(k-1)==1):
        k-=1