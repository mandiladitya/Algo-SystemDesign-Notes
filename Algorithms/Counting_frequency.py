# Method 1 ( USING DICT)
l=[1,1,2,2,3, 4,2]
d=dict()
for i in l:
  if i in d:
    d[i]+=1
  else:
    d[i]=1
for k,v in d.items():
  print(k,v,sep="->")

# Method 2 (Collections)
from collections import Counter
l=[1,1,2,2,3, 4,2]
d=Counter(l)
for k,v in d.items():
  print(k,v,sep="->")
