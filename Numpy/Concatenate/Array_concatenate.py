import numpy as np

arr1 = np.array(list(map(int, input().split())))
arr2 = np.array(list(map(int, input().split())))

print(np.concatenate((arr1, arr2), axis=0))