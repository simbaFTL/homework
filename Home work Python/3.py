num=int(input())
if num==0:
  print('нулевое число')
elif num<0:
  print('отрицательное ', end='')
elif num>0:
  print('положительное ', end='')
if num%2==0:
  print('четное число', end='')
else:
  print('нечетное число', end='')




str = input()
a = str.count("a")
e = str.count("e")
i = str.count("i")
o = str.count("o")
u = str.count("u")
print("Количество гласных букв:", a+e+i+o+u)
print("Количество согласных букв:",len(str)-(a+e+i+o+u))
if a>0:
  print('Количество "а"', a)
else:
  print("False")
if e>0:
  print('Количество "e"', e)
else:
  print("False")
if i>0:
  print('Количество "i"', i)
else:
  print("False")
if o>0:
  print('Количество "o"', o)
else:
  print("False")
if u>0:
  print('Количество "u"', u)
else:
  print("False")




x=int(input())
i=int(input())
m=int(input())
if i>=x and m>=x:
  print(2)
elif i>=x and m<x:
  print("Ivan")
elif m>=x and i<x:
  print("Mike")
elif i<x and m<x and m+i>=x:
  print(1)
else:
  print(0)