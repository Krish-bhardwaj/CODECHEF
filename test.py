def getMax(arr, ans, chosen, N):
    if len(arr) == N:
        ans = max(ans, calcScr(arr))
        return ans
    for i in range(1, N+1):
        if chosen[i-1]:
            continue
        chosen[i-1] = True
        arr.append(i)
        ans = getMax(arr, ans, chosen, N)
        chosen[i-1] = False
        arr.pop()
    return ans

def calcScr(arr):
    ans = 0
    for i in range(1, len(arr)+1):
        ans += (i ^ arr[i-1])
    return ans
 
for i in range(int(input())):
    x = int(input())
    arr = []
    ans = -1
    chosen = [False for i in range(1, x+1)]
    ans = getMax(arr, ans, chosen, x)
    print(ans)