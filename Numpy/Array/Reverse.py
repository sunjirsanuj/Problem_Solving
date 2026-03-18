import numpy as np

r, c = map(int, input().split())
arr = np.array([list(map(int, input().split())) for _ in range(r)])

print(arr[::-1])