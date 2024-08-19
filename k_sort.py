numTests = int(input())
 
for i in range(numTests):
     lenarr = int(input())
     arr = list(map(int,input().split()))
     
     toInc = [0 for i in range(len(arr))]
 
     for i in range(1, len(arr)):
          if arr[i] < arr[i-1] + toInc[i-1]:
               toInc[i] = arr[i-1] + toInc[i-1] - arr[i]
 
     cost = 0
     temp = []
     totalValues = 0
     for x in toInc:
          if x != 0:
               temp.append(x)
               totalValues += 1
 
     sol = {}
     for n in temp:
          sol[n] = sol.get(n, 0) + 1
 
     sol = sorted(sol.items(), key=lambda x:x[0])
 
     nUsed = 0
     for key, val in sol:
          nkey = key - nUsed
          cost += (totalValues + 1) * nkey
          totalValues -= val
          nUsed = key
 
     print(cost)
