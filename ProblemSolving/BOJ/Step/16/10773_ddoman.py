# #######################################
# 제로
# https://www.acmicpc.net/problem/10773
# #######################################
k = int(input())
nums = []
total = 0

for _ in range(k):
    n = int(input())
    if n == 0:
        total -= nums.pop()
    else:
        nums.append(n)
        total += n

print(total)
