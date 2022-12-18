import datetime
sindi = datetime.datetime.now()
print(sindi)

tarih = input("aracınızın trafiğe çıkış zamanı: ")
tarih = tarih.split('/')
trafigeCikis = datetime.datetime(int(tarih[0]), int(tarih[1]), int(tarih[2]))
kacYildir = sindi - trafigeCikis
print(kacYildir)