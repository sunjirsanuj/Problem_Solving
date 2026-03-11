import numpy as np

arr = np.array(list(map(int, input().split())))
arr = arr.astype(float)
print(arr[::-1])