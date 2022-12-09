k=5
for i in range(0,12):
    for j in range(0,13):
        if(j<6 and k==j):
            print(" * ", end="")
        else: 
            print(" _ ",end="")
    print("")
    if(i%k==1):
        k-=1