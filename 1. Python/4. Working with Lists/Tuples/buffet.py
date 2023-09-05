# five simple foods stores in a tuple
buffet_foods = ("Rice", "fish", "chicken", "ugali", "fries")

# for loop to print each of foods
print("Original foods: ")
for food in buffet_foods:
    print(food)
print('\n')

# lets try to modify one item in the tuple in the wrong way
# buffet_foods[1] = "Githeri" # This line is commented out

# replace to foods with different foods
print("modified foods")
buffet_foods = ("Rice", "fish", "chicken", "prawns", "sushi")
for food in buffet_foods:
    print(food)
print('\n')