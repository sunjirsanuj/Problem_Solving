import numpy as np

r, c = map(int, input().split())

arr1 = np.array([list(map(int, input().split())) for _ in range(r)])
arr2 = np.array([list(map(int, input().split())) for _ in range(r)])

print(np.add(arr1, arr2))
print(np.subtract(arr1, arr2))
print(np.multiply(arr1, arr2))
print(np.floor_divide(arr1, arr2))
print(np.mod(arr1, arr2))
print(np.power(arr1, arr2))