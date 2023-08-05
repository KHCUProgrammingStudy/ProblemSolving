# #######################################
# 괄호
# https://www.acmicpc.net/problem/9012
# #######################################
import sys

def is_vps(line):
    """Returns True if a given line is vps. False, otherwise."""
    stack = []
    for char in line:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if not stack:
                return False
            if stack.pop() != "(":
                return False
    return len(stack) == 0


n_lines = int(input())
for _ in range(n_lines):
    print("YES" if is_vps(sys.stdin.readline()) else "NO")
