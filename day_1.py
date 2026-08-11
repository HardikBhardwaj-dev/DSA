# Q1 FIND THE AREA OF THE SQUARE WHOSE SIDE IS GIVEN AS s

# SOLUTION

s=5

area_of_square= s**2
print(area_of_square)



# Q2 FIND THE MINIMUM OF TWO NUMBERS

# SOLUTION

a=2
b=3

if a>b:
    print("b is smaller")
else:
    print("a is smaller")


# Q3 IS THE GIVEN NUMBER ODD OR EVEN USE THE VALUE OF a FROM QUESTION 2


if a%2==0:
    print("even")
else:
    print("odd")


# Q4 FIND THE SUM OF FIRST N NUMBERS STARTING FROM 1


n=1
sum=0

while n<=10:
    sum +=n
    n+=1
print(sum)


# Q5 IS NUMBER PRIME OR NOT

prime_num= 7
check=2
is_prime=True

while check<prime_num:
    if prime_num%check!=0:
        check+=1
    else:
        print("number is not prime")
        is_prime=False
        break

if is_prime:
    print("Prime number")

