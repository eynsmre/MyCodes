x = int(input("Enter a number: "))
result = x>0 and x<100
print(f"The number is less than 100 and greater than 0: {result}")

result = x>0 and x%2==0
print(result)

vize = int(input("Vize puanı: "))
final = int(input("Final puanı: "))
ortalama = vize*0.4 + final * 0.6
result = (ortalama > 50 and final >=50) or final > 70

print(f"Ogrenci ortalaması: {ortalama}, geçme durumu : {result}")