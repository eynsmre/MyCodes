# user1= "Yunus Emre", "Erkeles"
# user2= "18", "Bilgisayar Mühendisliği"

# users= (user1, user2)
# print(users)

# a= users[1]
# print(a[0])
# print(users[1][0])

numbers= (2, 4, 6, 5, 8, 7, 2, 33)
letters= ("a", "c", "sinan", "w", "i", "ğ", "ü")

val= min(letters)

print(val)

numbers= list(numbers)
letters= list(letters)

numbers.insert(3, 26) #Yerine konup diğer sayıyı sağa kaydırır. (Üçüncü sıraya 26)
numbers.append(72)    #Son sıraya eklenir. (72)
numbers.pop()         #numbers listesindeki son sayıyı siler. (Parantez içine sayı yazılırsa o satırdaki sayı silinir.)
numbers.remove(33)    #number listesinden 33 sayısını siler.
letters.sort()        #Sort komutu sıralama sağlar. (Alfabetik veya küçükten büyüğe gibi)
numbers.reverse()             #Listeyi tam tersine çevirir.
numbers.count(2)              #numbers listesinde "2" elemanı kaç defa bulunur.
letters.clear()               #letters listesinin tüm elemanlarını sil.
index= numbers.index(2)       #2 sayısı kaçıncı indexte bulunuyor?
result= 0 in numbers          #numbers listesinin içinde 0 var mı?
str= ("Yunus,Emre")
str= str.split(",")           # "," 'den itibaren ayırarak liste oluştur.

kıyafetler= []
kıyafet = input("kıyafet: ")
kıyafetler.append(kıyafet)
kıyafet = input("kıyafet: ")
kıyafetler.append(kıyafet)
kıyafet = input("kıyafet: ")
kıyafetler.append(kıyafet)


print(kıyafetler)


print(str)
print(result)
print(numbers)
print(letters)
print(index)

input()