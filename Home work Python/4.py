a = input()
if a == a[::-1]:
    print('yes')
else:
    print('no')

b = input()
while "  " in b:
  b = b.replace("  "," ")
print(b)
