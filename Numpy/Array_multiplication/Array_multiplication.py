import numpy as np

r, c = map(int, input().split())

arr1 = np.array([list(map(int, input().split())) for _ in range(r)])
arr2 = np.array([list(map(int, input().split())) for _ in range(r)])

print(np.matmul(arr1, arr2))