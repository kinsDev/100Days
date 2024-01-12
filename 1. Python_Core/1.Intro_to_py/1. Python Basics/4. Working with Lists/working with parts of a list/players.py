# Slicing a List
players = ["Messi", "Haaland", "Neymar", "Mbappe", "Ronaldo", "Lewandoski"]
# from the beginning to the 3rd person on the list
print(players[0:3])

# from the first person to the fourth person on the list
print(players[1:4])

# from beginning to the fourth person on the list
print(players[:4])

# after the fourth person in the list to the end
print(players[4:])

# slicing the last three players in the roaster
print(players[-3:])

# slicing the first three players in the roaster
print(players[:-3])
print('\n')



# Looping through a Slice
players = ['charles', 'martina', 'michael', 'florence', 'eli']
print("Here is the first three players on my team: ")
for player in players[:3]:
    print(player.title())
print('\n')
