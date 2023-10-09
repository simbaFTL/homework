n = int(input())
count = 0
for i in range(n + 1):
    num = int(input())
    if num == 0:
        count += 1
print(count)

x = int(input())
count = 0
for i in range(1, x + 1):
    if x % i == 0:
        count += 1
print(count)

a, b = int(input()), int(input())
for i in range(a, b+1):
    if i % 2 == 0:
        print(i, end=" ")

