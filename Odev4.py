import numpy as np
import math
i=0
j=0
A = np.array([[1/9,8/9,-4/9],[4/9,-4/9,-7/9],[8/9,1/9,4/9]])
B= np.empty([A.shape[0],A.shape[1]])
for i in range(A.shape[0]):
    for j in range(A.shape[1]):
       B[j,i] = A[i,j]
c = A.dot(B)

i=0
j=0

for i in range(A.shape[0]):
    for j in range(A.shape[1]):
        c[i,j] = round(c[i,j])


print(c)