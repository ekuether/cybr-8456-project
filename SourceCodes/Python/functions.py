def printOne(val):
    print(val)

def printTwo(val):
    print(val)
    printOne(val)

def printThree(val):
    print(val)
    printTwo(val)

def printFour(val):
    print(val)
    printThree(val)

def printFive(val):
    print(val)
    printFour(val)

printOne(1)
printTwo(2)
printThree(3)
printFour(4)
printFive(5)