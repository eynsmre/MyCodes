# plakalar = ("01","02","06","08","34","35","53","61")
# sehirler = {"Adana" : "01" ,"Adıyaman": "02","Ankara": "06","Artvin": "08","İstanbul": 34,"İzmir": 35,"Rize": 53,"Trabzon": 61}



# a =(input("Lütfen istediğiniz şehri giriniz:"))

# print(sehirler[a])


u = { "Neuer": {1, "Goalkeeper"} , 
"Cristiano": 7 ,
 "Messi": 10 , 
 "Neymar": 9 , 
 "Salah": 8, 
 "Puyol": 42 ,
  "Pique": 6 , 
"De Bruyne": 36 }


print()
print(u)
print()

print( " " * 50 )
print( " * " * 50)
print( " " * 50)
print()

number= input("Ogrenci no: ")
name= input("Ogrenci ismi: ")
age= input("Ogrenci yaşı: ")
sex= input("Ogrenci cinsiyeti: ")

b= {number: {name,age,sex}}

a= f'{number} numaralı öğrencinin ismi {name} , yaşı {age} ve cinsiyeti {sex}'

print(a)
print(b)

input()
