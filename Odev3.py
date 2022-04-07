import numpy as np
i = 0
j = 0
toplam=0
A = np.array([[1,4,0,-3],[-2,7,3/2,6],[3,0,-5,0],[4,8,0,10]])
for i in range(A.shape[0]):
  for j in range(A.shape[1]):
    if i == j:
      toplam += A[i, j]
print(toplam)