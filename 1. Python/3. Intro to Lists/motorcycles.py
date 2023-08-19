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
#Removing an Item Using the del Statement
