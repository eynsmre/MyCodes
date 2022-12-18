
# x= 5
# # x= x+5
# # x+= 5 # x= x+5 
# # x*= 5 # x= x*5
# # x/= 5 # 
# # x%= 5 # x mod 5 (x'in 5e bölümünden kalan kaçtır)

# x//= 5  # x/5'in tam kısmı
# x**= 5  # x üssü 5

# sayilar = 1 ,2 ,3
# x,y,z = sayilar #Değişken sayısı ve tupledaki index sayısı eşit olmalı.

# # sayilar = 1, 2, 3, 4
# # x, y, z = sayilar # ValueError: too many values to unpack (expected 3)

# sayilar = 1, 2, 3, 4, 5
# x, y, *z = sayilar

# print(x,y,z)


x, y, z = 2, 5, 10
numbers = 1, 5, 7, 10, 6

# a= int(input("Birinci sayıyı giriniz: "))
# b= int(input("İkinci sayıyı giriniz: "))

# t = a*b - x + y + z

# print(t)

# y//= x
# print(y)

y**= x
print(y)

x, *y, z = numbers

z**= 3 
print(z)

o = y[0]+ y[-3] +y[2]
print(o)

#a==b # a, b'ye eşit mi? #( True or False # )

#a!=b # a, b'ye eşit değil mi? ( True değil, False eşit )