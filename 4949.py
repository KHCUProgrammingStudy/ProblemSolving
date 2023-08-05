# #######################################
# 균형잡힌 세상
# https://www.acmicpc.net/problem/4949
# #######################################
import sys

def is_balanced(line):
    """Returns True if a given line is balanced. False, otherwise."""
    stack = []
    for char in line:
        if char in ["(", "["]:
            stack.append(char)
        elif char == ")":
            if not stack:
                return False
            if stack.pop() != "(":
                return False
        elif char == "]":
            if not stack:
                return False
            if stack.pop() != "[":
                return False

    return len(stack) == 0


for l in sys.stdin:
    if l.rstrip() == ".":
        break
    print("yes" if is_balanced(l) else "no")
