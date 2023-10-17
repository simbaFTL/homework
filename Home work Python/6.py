a = set()
n = int(input())
for i in range(n):
    num = int(input())
    a.add(num)
print(len(a))

a = {1, 2, 3, 4, 5}
b = {1, 2, 3}
print(len(a.intersection(b)))

numbers = input().split()
seen_numbers = set()

for number in numbers:
    if number in seen_numbers:
        print("YES")
    else:
        seen_numbers.add(number)
        print("NO")

