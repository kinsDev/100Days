favorite_pizzas = ["chicken", "barbeque", "hawaian"]

# making a copy of the list of pizzas
friend_pizzas = favorite_pizzas[:]

# adding a different pizza to the friend list
friend_pizzas.append("unique flavor")

# my list of  favorite pizzas
print("My favorite pizzas are: ")
for pizza in favorite_pizzas:
    print(pizza)
print('\n')

# my friend's list of favorite pizzas
print("My friend's favorite pizzas are: ")
for friend_pizza in friend_pizzas:
    print(friend_pizza) 