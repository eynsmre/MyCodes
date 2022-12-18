plakalar = {"Adana": 1, "Artvin":8, "Bursa":16 }
print(plakalar["Artvin"])

users = {
    "emre": {
        "age": 20,
        "job": "computer engineer"
    },
    "ziya":{
        "age": 7,
        "job": "student"

    }
}

print(users["emre"]["age"])
print(users["emre"])

users = {}

number = input("kullanıcı no:")
name = input("kullanıcı isim:")
phone = input("kullanıcı telefon: ")
users[number] = {
    "isim": name,
    "tel no": phone
}
print(users[number])
