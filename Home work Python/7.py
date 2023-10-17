pets = {}

def get_age_string(age):
    if age % 10 == 1 and age != 11:
        return f"{age} год"
    elif 2 <= age % 10 <= 4 and (age < 10 or age > 20):
        return f"{age} года"
    else:
        return f"{age} лет"

pet_name = input("Введите имя питомца: ")
pet_type = input("Введите вид питомца: ")
pet_age = int(input("Введите возраст питомца: "))

pets[pet_name] = {
    "Вид питомца": pet_type,
    "Возраст питомца": pet_age,
    "Имя владельца": input("Введите ваше имя: ")
}

print(f'Это {pet_type.lower()} по кличке "{pet_name}". Возраст питомца: {get_age_string(pet_age)}. Имя владельца: {pets[pet_name]["Имя владельца"]}')

dictionary = {}

for i in range(10, -6, -1):
    dictionary[i] = i ** i

print(dictionary)
