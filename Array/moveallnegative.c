a=[-1,2,5,-3,0,-9]
temp1=[]
temp2=[]
for i in range(0,len(a)):
    if(a[i]>=0):
        temp1.append(a[i])
    else:
        temp2.append(a[i])

print(temp1)
print(temp2)
res=[]
res=temp1+temp2
print(res)
