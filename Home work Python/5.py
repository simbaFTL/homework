arr = []
n = int(input())
for i in range(n):
    num = int(input())
    arr.append(num)
print(arr[::-1])

arr = []
n = int(input())
for i in range(n):
    num = int(input())
    arr.append(num)

def func(arr:list):
    arr = [arr[-1]] + arr[:len(arr)-1]
    print(arr)

func(arr)

m = int(input())
n = int(input())
a = []
b = []
for i in range(n):
    a.append(int(input()))

for x in range(len(a)):
    if a[x] + min(a) <= m:
        b += [[a[x], min(a)]]
        a[x] += m
        a[a.index(min(a))] += m
    else:
        if a[x] > m:
            continue
        else:
            b += [[a[x]]]
print(len(b))




