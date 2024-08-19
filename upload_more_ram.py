
numTests = int(input())
 
for i in range(numTests):
     gb, internet = list(map(int,input().split()))
     print((gb-1) * internet + 1)