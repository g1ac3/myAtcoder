n = int(input())
A = list(map(int,input().split()))
ans = 1
for i in range (0,n):
    ans = ans * A[i]
if ans > 1e18 :
    print(-1)
else :
    print(ans)
