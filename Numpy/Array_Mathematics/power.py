import numpy as np

arr = np.array(list(map(int, input().split())))
ex = int(input())

print(np.power(arr, ex))