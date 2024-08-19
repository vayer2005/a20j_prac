n = input()
 
cells = list(map(int,input().split()))
 
cells.sort()
 
minlen = cells[-1] - cells[0] + 1
 
for i in range(1, len(cells)):
  toReach = cells[i-1]
  minlen = min(minlen, 360-cells[i] + toReach + 1)
 
print(minlen)