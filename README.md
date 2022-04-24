# cybr-8456-project
This holds all of my project files for our project in CYBR 8456. Using these files, we were curious if we could differentiate
between what language was used and see if it had any vulnerabilites. Due to time constraints of struggling to install several compilers,
we were not able to get very far in looking for vulnerabilities.

There are seven programs spread out among a multitude of languages.
Incase one might want to see if they can decipher what languages were used in each program, we labeled all .exe folders with letters

For no hints, do not look in the source code folder as it will narrow down the languages for you

For answers look at the answer.txt file

We count it as different if a compiler had different optimization techniques as well. 
An example would be turning a jar file into an exe using two seperate programs.

# Program Discriptions
    - Basic Hello World 
        - Just print "Hello, World!" in as few lines as possible
    - Basic Logic 
        - Print "Multiple Arguments" if any arguments are detected
        - Print "No Arguments" if no arguments are detected
    - Loop through an array *
        - char array of size 10, starts with values 1-10 base 10
        - loop through using a while loop
    - String Comparison
        - Print "Strings are equal" if the two inputs are equal
        - Print "Strings are not equal" if the two inputs are not equal
    - Boundaries
        - char 2x10 array
        - array at index 0 has first argument copied in
        - array at index 1 has second argument copied in
        - rest same as "String comparison"
    - Functions
        - five total Functions
        - printFive takes a char variable prints it with a new line and call printFour with the same variable
        - printFour, same as printFive, but calls printThree instead
        - ...
        - printOne does not call anything, all functions are void
        - call each function in order (one - five), with the respective paramater 1-5
    - Math
        - array of 1 - 5 as ints
        - addition starts at 0
        - multiplication starts at 1
        - subtraction starts at 15
        - division starts at 120
        - loops through the array performing the same operation on the variable
        - four seperate loops are used
        - print out all four variables in order
        - print out the sin of addition
        - print out the pow of multiplication with multiplication
        - print out exp of subtraction
        - print out abs of division
    - Recursion
        - fibinachi recursion with number 44
        - should print out 1134903170
        
