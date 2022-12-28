print("\nİdeal kilo hesaplama uygulaması:")
cinsiyet = input("Cinsiyet giriniz: ")
boy = float(input("Lütfen boyunuzu giriniz: "))
inc = boy / 2.54 

""""
cinsiyet = int(input("Eğer cinsiyetiniz erkek ise 1'e, kadın ise 2'ye tıklayın: "))
if(cinsiyet != 1 and cinsiyet != 2):
    print("Yanlış işlem")
    quit()
"""
""""
if(inc<60):
    print("Boyunuza göre ideal kilo ölçülemiyor.")
    quit()
#sonuc =  2.3 * (inc-60) 

#BOY 60'IN ALTINDA OLURSA PROGRAM EKSİLİ DÖNDÜRÜR
"""

#cinsiyet = cinsiyet.lower()
#tüm harfleri küçük yapma

if(cinsiyet == "erkek"):
    sonuc = 50 + 2.3 * ( inc - 60)
elif(cinsiyet =="kadın"):
    sonuc = 45.5 + 2.3 * (inc - 60)
else:
    print("Bişeyi yanlış yaptın kanks")
    #print("Cinsiyet yanlış girildi.")
    quit()

"""
if(cinsiyet == "erkek"):
    sonuc = sonuc + 50.0
elif(cinsiyet =="kadın"):
    sonuc = sonuc + 45.5
else:
    print("Yanlıs yaptın bro")
"""

print(sonuc)
#print("ideal kilonuz:", sonuc)
#print(f"ideal kilonuz: {sonuc}")
#print(f"ideal kilonuz: {int(sonuc)}")
#print(f"ideal kilonuz: {round(sonuc)}")
#print(f"ideal kilonuz: {round(sonuc,2)}")

