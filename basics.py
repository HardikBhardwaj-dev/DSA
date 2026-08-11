# n=123
# reverse_number=0
# temp=n
# sum=0
# while temp>0:
#     conversion= temp%10
#     reverse_number= reverse_number*10 + conversion
#     temp=temp//10
#     sum+=conversion

# print(reverse_number)
# print(sum)

# year=2024

# if year%400==0 or (year%100!=0 and year%4==0):
#     print("leap year")
# else:
#     print("not a leap year")

# num= 153
# tem=num
# armstrong=0

# while tem>0:
#     conv=tem%10
#     armstrong+= conv**3
#     tem=tem//10
# print(armstrong)


# f_digit=0
# sec_digit=1

# n=10

# for i in range(n):
#     number= f_digit+sec_digit
#     print(number)
#     f_digit=sec_digit
#     sec_digit=number


n=10

def fibonacci_series(n):
    if n<=1:
        return n
    return fibonacci_series(n-1)+fibonacci_series(n-2)

print(fibonacci_series(n))

