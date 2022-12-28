print()
print()
print("#" * 80)
print("#", " "*74, "#")
print("#", " "*74, "#")
print(" 'Plakapp' uygulamasına hoş geldiniz.".center(80, " " ))
print("#", " "*74, "#")
print("#", " "*74, "#")
print("#" * 80)
print()
print()
print()

cevap = ["Adana", "Adıyaman", "Afyon", "Ağrı", "Amasya", "Ankara", "Antalya", "Artvin", "Aydın", 
"Balıkesir", "Bilecik", "Bingöl", "Bitlis", "Bolu", "Burdur", "Bursa", "Çanakkale", "Çankırı", 
"Çorum", "Denizli", "Diyarbakır", "Edirne", "Elazığ", "Erzincan", "Erzurum", "Eskişehir", 
"Gaziantep", "Giresun", "Gümüşhane", "Hakkari", "Hatay", "Isparta", "İçel", "İstanbul", 
"İzmir", "Kars", "Kastamonu", "Kayseri", "Kırklareli", "Kırşehir", "Kocaeli", "Konya", 
"Kütahya", "Malatya", "Manisa", "Kahramanmaraş", "Mardin", "Muğla", "Muş", "Nevşehir", 
"Niğde", "Ordu", "Rize", "Sakarya", "Samsun", "Siirt", "Sinop", "Sivas", "Tekirdağ", 
"Tokat", "Trabzon", "Tunceli", "Şanlıurfa", "Uşak", "Van", "Yozgat", "Zonguldak",
"Aksaray", "Bayburt", "Karaman", "Kırıkkale", "Batman", "Şırnak", "Bartın",
"Ardahan", "Iğdır", "Yalova", "Karabük", "Kilis", "Osmaniye", "Düzce"]

print("Çıkmak istiyorsanız 1'den küçük veya 81'den büyük bir sayı yazınız.".center(80, " " ))
print()
plaka = int(input("Hangi ile karşılık geldiğini merak ettiğiniz plaka numarası: ".center(80, " " )))

while(plaka in range(1,82)):
    print(f"{plaka} numaralı plakaya sahip ilimiz: {cevap[plaka-1]}".center(80, " " ))
    print()
    plaka = int(input("Hangi ile karşılık geldiğini merak ettiğiniz plaka numarası: ".center(80, " " )))

input()