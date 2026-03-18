import numpy as np

arr = np.array(list(map(int, input().split())))
r, c = map(int, input().split())

print(np.reshape(arr, (r, c)))