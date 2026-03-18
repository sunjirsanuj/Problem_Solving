import numpy as np

x, y, z = map(int, input().split())
arr = np.array(list(map(int, input().split())))
arr = arr.reshape((x, y, z))

p, q, r = map(int, input().split())
print(arr[p, q, r])