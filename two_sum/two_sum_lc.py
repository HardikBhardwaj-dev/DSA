nums= [2,7,11,15]
target=9
length= len(nums)
sum_val=0
f_index=0
sec_index=0
found= False

for i in range(0,length):
    for j in range(i+1,length):
        sum_val= nums[i]+nums[j]
        if sum_val== target:
            f_index=i
            sec_index=j
            found=True
            break
    if found:
        break

print(f_index,sec_index)