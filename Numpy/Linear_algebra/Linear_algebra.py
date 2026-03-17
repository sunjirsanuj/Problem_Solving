import numpy as np

n = int(input())

arr = np.array([list(map(float, input().split())) for _ in range(n)])
print(np.round(np.linalg.det(arr), 2))