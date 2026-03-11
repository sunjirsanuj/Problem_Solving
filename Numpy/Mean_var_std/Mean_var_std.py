import numpy as np

r, c = map(int, input().split())

arr = np.array([list(map(int, input().split())) for _ in range(r)])

print(np.mean(arr, axis=1))
print(np.var(arr, axis=0))
print(np.round(np.std(arr), 11))