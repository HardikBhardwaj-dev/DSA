lst= [1,2,3,4,5]
length=5
target=5
found=False

for i in range(length):
    if target== lst[i]:
        found=True
        print("Found")
        break

if (found==False):
    print("Not found")