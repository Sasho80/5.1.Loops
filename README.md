01.Problem: Numbers from 1 to 100
Write a program that prints the numbers from 1 to 100. The program does not accept input and prints 
the numbers from 1 to 100 sequentially, each on a separate line.
Hints and Guidelines
We can solve the problem using a for loop, via which we will pass through the numbers from 1 to 
100 using the i variable, and print the numbers in the body of the loop.

02.Example: Numbers up to 1000, Ending by 7
Write a program that finds all numbers within the range [1 … 1000] that end in 7.
Hints and Guidelines
We can solve the problem by combining a for loop for passing through the numbers from 1 to 1000 
and a condition to check if each of the numbers ends in 7. Of course, there are other solutions too, 
but let's solve the problem using a loop + condition.

03.Example: All Latin Letters
Write a program that prints the letters of the English Alphabet: a, b, c, …, z.
Hints and Guidelines
It is good to know that the for loops don't only work with numbers. We can solve the task by running 
a for loop that passes sequentially through all letters in the English alphabet.

04.Problem: Summing up Numbers
Write a program that inputs n integers and sums them up.
• The first line of the input holds the number of integers n.
• Each of the following n lines holds an integer for summing.
• Sum up the numbers and finally print the result.
Sample Input and Output
Input Output Input Output Input Output Input Output Input Output 
2     30     3     -60    4     43     1     999    0     0
10           -10          45           999
20           -20         -20
             -30          7
                          11

05.Problem: Max Number
Write a program that enters n integers (n > 0) and finds the max number among them (the largest). 
The first input line specifies the number of integers n. The next n lines hold the integers, one per line.
Chapter 5.1. Loops (Repetitions) 195
Sample Input and Output
Input Output Input Output Input Output Input Output Input Output 
2     100    3     20     4     99     1     999    2     -1
100          -10          45           999          -1
99           20           -20                       -2
            -30            7
                           99

Guidelines and hints
We can solve the largest number problem as follows:
 Enter the number of numbers n.
 We will read the first number separately and initialize the variable
max with its value so we can compare subsequent numbers with it.
 We create a loop starting at 1 (to skip the first number that
we read separately) to n.
 At each step we read a number and check if it is greater than
the last found largest (i.e. the max variable) and if it is - we save
its value in the variable max.
 Finally we print the variable in which we store the largest number.

06.Problem: Min Number
Write a program that inputs n integers (n > 0) and finds the min number among them (the smallest 
number). First enter the number of integers n, then n numbers additionally, one per line.
Sample Input and Output
Input Output 
 
Input Output Input Output Input Output Input Output
1     50     2     99     3     -30    4     -20
50           100          -10          45     
             99           20           -20
                          -30          7
                                       99
Hints and Guidelines
The problem is completely identical to the previous one, except this time we will start with another 
neutral starting value.
