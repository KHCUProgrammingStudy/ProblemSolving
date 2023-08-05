# #######################################
# 스택 2
# https://www.acmicpc.net/problem/28278
# #######################################
import sys

n_lines = int(input())
s = []
for _ in range(n_lines):
    nums = list(map(int, sys.stdin.readline().split()))
    if nums[0] == 1:
        s.append(nums[1])
    elif nums[0] == 2:
        print(s.pop() if s else -1)
    elif nums[0] == 3:
        print(len(s))
    elif nums[0] == 4:
        print(0 if s else 1)
    elif nums[0] == 5:
        print(s[-1] if s else -1)
