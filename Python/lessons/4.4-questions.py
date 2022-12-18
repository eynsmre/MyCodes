# a = int(input("Birinici sayı: "))
# b = int(input("İkinic sayı: "))

# result = (a<=b)
# print(result)

c = int(input("Birinci vize: "))
d = int(input("İkinci vize: "))
e = int(input("Final notu: "))

x= (c)* (0.3)+ d * (0.3) + e * (0.4)
print(x)

# if (x) > 50 : print("Tebrikler geçtiniz.")
# else: print("Geçemediniz")
print(f"Ortalamanız {x} ve dersten geçme durumunuz: {x>=50}")

# print()

# tekcift =int(input("Tek mi çift mi öğrenin: "))
# if tekcift / 2  : print("Sayı çift.")

nepo =int(input("Negatif mi Pozitif mi: "))
if nepo > 0 : print("pozitif")
elif nepo < 0 :print("negatif")
y = nepo==0
print(f"Girdiğiniz sayı 0'a eşit mi? : {y}")
