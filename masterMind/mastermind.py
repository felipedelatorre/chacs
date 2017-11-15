from random import *

masterColors=['red','green','blue','yellow','brown','orange','black','white']
mastermind=sample(masterColors,4) #mastermind selects its colors
tries=5
print('You have ' + str(tries) + ' tries')

while tries != 0:
    userChoice=[]
    maxLenghtChoice=4
    while len(userChoice) < maxLenghtChoice:
        colorPick = int(input('Select a color then press [ENTER] 0=red, 1=green, 2=blue, 3=yellow, 4=brown, 5=orange, 6=black, 7=white: '))
        colorFromList = masterColors[colorPick]
        userChoice.append(colorFromList)
    print(mastermind)
    print('You have picked')
    print(userChoice)

    for i in range(0,4):
        if mastermind[i] == userChoice[i]:
            print('The ' + userChoice[i] + ' color is in the right position')
        else: 
            if (userChoice[i] in mastermind):
                print('The ' + userChoice[i] + ' color is in the list')
            else:
                print('The ' + userChoice[i] + ' color is not in list')
    tries = tries - 1
