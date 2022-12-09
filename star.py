k=7
for i in range(0,14):
    for j in range(0,16):
        if(j<7 and k==j):
            print(" * ", end="")
        else: 
            print(" _ ",end="")
    print("")
    if(i%k==1):
        k-=1