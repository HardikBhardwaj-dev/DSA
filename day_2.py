# START PATTERN 1
n=5
for i in range(n+1):
    print("*"*i)
# STAR PATTERN 2
for i in range(1,n+1):
    print(" "*(n-i)+ "*"*i)

# STAR PATTERN 3    
m=13
value=0
for i in range(1,m+1,2):
    value= (m-i)//2
    print(" "*value + "*"*i)

# STAR PATTERN 4

m=7
value=0
temp_gap=1
for i in range(1,m+1,2):
    value= (m-i)//2
    if i==1:
        print(" "*value + "*")
    elif i==m:
        print("*"*m)
    else:
        print(" "*value + "*" + " "*temp_gap + "*")
        temp_gap= temp_gap+2

# STAR PATTERN 5

m=13
value=0
for i in range(1,m+1,2):
    value= (m-i)//2
    print(" "*value + "*"*i)
for i in range(m-2,0,-2):
    value= (m-i)//2
    print(" "*value + "*"*i)

# HOW TO SOLVE STAR PATTERN QUESTIONS: FIRST THINK ABOUT HOW MANY SPACES U HAVE TO PRINT AND HOW MANY STARS
# THEN MAKE YOUR FORMULA ACCORDINGLY