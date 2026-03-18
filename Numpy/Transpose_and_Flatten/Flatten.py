import numpy as np

x, y, z = map(int, input().split())
arr = np.array(list(map(int, input().split())))
arr = arr.reshape(x, y, z)

print(arr.flatten())