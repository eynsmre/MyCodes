a= input("Sifre: ")

if a == "1231234*ye": print("""
    
message = "Hello World. My name is Yunus Emre"

# message = message.upper()
# message = message.lower()
# message = message.title()        [Tüm Kelimelerin İlk Harfi]
# message = message.capitalize()   [Sadece en baştaki harf]
# message = message.strip()        [ Baştaki boşluk karakterini sil]
# message = message.split()        ["Her" "Kelimeyi" "Ayrı" "Yaz"]
# message = message.split(".")     [Noktalardan itibaren ayır]

# message = " ".join(message)      [Ayrı olan kelimeleri birleştir ve araya BOŞLUK ekle ("Naber","Nasılsın"= Naber Nasılsın)]

# message = message.center(100)    [Yazdığım message'ın karakter sayısını boşluklarla 100 yap ve "message" ortada olsun.]
# message = message.center(100,"*")            [Boşluklarla değil *'larla]
# index (index herhangi bir kelime olabilir) = message.find("Yunus")    [Cümlede "Yunus" kelimesinin başlangıcının bulunduğu konum (24 gibi) {-1 ise kelime yok}]

# a = message.startswith("H")
# b = message.endswith("e") (Büyük küçük harf fark eder.)

# message= message.replace("Yunus Emre","Sanane Lan") (Yunus Emre yazısının yerine Sanane Lan koy.)
# message = message.replace("Yunus", "Sanane").replace("Emre","Lan").replace("World","world")

# SELECT LINE = CTRL + L
# TOGGLE LİNE (#) = CTRL + ö

print(message)


""")

else: print("Şifre Yanlış.")

input()