a = set()
n = int(input())
for i in range(n):
    num = int(input())
    a.add(num)
print(len(a))

a = []
b = []

n = int(input())
for i in range(n):
    a.append(int(input()))

m = int(input())
for i in range(m):
    b.append(int(input()))

s1 = set(a)
s2 = set(b)
common = s1 & s2

print(len(common))

numbers = input().split()
seen_numbers = set()

for number in numbers:
    if number in seen_numbers:
        print("YES")
    else:
        seen_numbers.add(number)
        print("NO")

