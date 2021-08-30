t = int(input())
for _ in range(t):
  n = int(input())
  arr = list(map(int, input().rstrip().split()))
  pairs = sorted([(arr[i], i+1) for i in range(n)])
  cnt = 0
  for i in range(n-1):
    for j in range(i+1, n):
      if pairs[i][0] * pairs[j][0] < 2*n:
        if pairs[i][0] * pairs[j][0] == pairs[i][1] + pairs[j][1]:
          cnt = cnt + 1
      else: break
  print(cnt)