# Copying a List
my_foods = ["chicken", "beef", "kales", "rice"]
friend_food = my_foods[:]

# just to show that we have separate lists, we add different foods to diff lists
my_foods.append("Ugali")
friend_food.append("fish")

print("My favorite foods are: ")
print(my_foods)

print("\nMy friend's favorite foods are: ")
print(friend_food)