n = 2**1000
sum =0
while n != 0:
    sum += int(n%10)
    n = int(n//10)
    
print(sum)