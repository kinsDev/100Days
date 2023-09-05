# looping through a list of car names, until we find a specified car name and change it to uppercase 
# and change the rest of the car names into to tile format 
cars = ["audi", "mercedes", "toyota", "suzuki", "bmw", "mazda"]
print("\n")
for car in cars:
    if car == "bmw":
        print(car.upper())
    else:
        print(car.title())
print('\n')