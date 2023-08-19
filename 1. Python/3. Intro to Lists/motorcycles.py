# Changing, Adding, and Removing Elements

#Changing value of item in list
motorcycles = ['honda', 'yamaha', 'suzuki']
print(motorcycles)

motorcycles[0] = 'ducati'
print(motorcycles)

# Appending Elements to the End of a List
motorcycles = ['honda', 'yamaha', 'suzuki']
motorcycles.append('ducati')
print(motorcycles)

# build lists dynamically using appand function
motorcycles = []

motorcycles.append('honda') 
motorcycles.append('yamaha') 
motorcycles.append('suzuki') 

print(motorcycles)

# Inserting Elements into a List
motorcycles = ['honda', 'yamaha', 'suzuki']

motorcycles.insert(0, 'ducati')
print(motorcycles)

# Removing Elements from a List
# Removing an Item Using the del Statement
motorcycles = ['honda', 'yamaha', 'suzuki']
del motorcycles[1]
print(motorcycles)

# Removing an item using the pop() method and then re-using it on your code
# pop method removes the last item in your list
motorcycles = ['Yamaha', 'Speed', 'honda', 'suzuki']
removed_motorcycle = motorcycles.pop()
print(motorcycles)
print(removed_motorcycle)
# we can pop at any position of list by including the position we wanna pop at
pop2 = motorcycles.pop(2)
print(pop2)

# We can also remove an item by value
motorcycles = ['Yamaha', 'Speed', 'honda', 'suzuki']
removed = motorcycles.remove('Speed')
print("I no longer want the " + str(removed) + " motorcyle")
print(removed)
print(motorcycles)