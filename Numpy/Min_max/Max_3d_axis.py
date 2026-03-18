import numpy as np

x, y, z = map(int, input().split())
arr = np.array(list(map(int, input().split())))
arr = arr.reshape(x, y, z)

print(np.max(arr, axis=0))
print(np.max(arr, axis=1))
print(np.max(arr, axis=2))