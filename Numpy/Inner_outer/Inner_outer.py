import numpy as np

arr1 = np.array(list(map(int, input().split())))
arr2 = np.array(list(map(int, input().split())))

print(np.inner(arr1, arr2))
print(np.outer(arr1, arr2))