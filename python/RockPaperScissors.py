from random import randint
t = ["Rock", "Paper", "Scissors"] #Gives computer options
computer = t[randint(0,2)] #computer picks a random item from list
print(computer) #Shows what the computer has selected. It breaks the fun of the game but it is cool to see what it picked
player = False

while player == False:
#set player to True
    player = input("Rock, Paper, or Scissors? ")
    if player == computer:
        print("Tie!")
    elif player == "Rock":
        if computer == "Paper":
            print("You lose!", computer, "covers", player)
        else:
            print("You win!", player, "smashes", computer)
    elif player == "Paper":
        if computer == "Scissors":
            print("You lose!", computer, "cut", player)
        else:
            print("You win!", player, "covers", computer)
    elif player == "Scissors":
        if computer == "Rock":
            print("You lose...", computer, "smashes", player)
        else:
            print("You win!", player, "cut", computer)
    else:
        print("That's not a valid play. Check your spelling!")
    #player was set to True, but we want it to be False so the loop continues
player = False
computer = t[randint(0,2)]
