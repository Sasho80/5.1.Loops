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

07.Problem: Left and Right Sum
Write a program that converts 2 * n integers and checks whether the sum of the first n integers (left 
sum) equals the sum of the second n numbers (right sum). In case the sums are equal, print "Yes" + 
the sum, otherwise print "No" + the difference. The difference is calculated as a positive number (by 
absolute value). The format of the output must be identical to the one in the examples below.
Sample Input and Output
Input Output            Input Output 
2     Yes, sum = 100    2     No, diff=1;
10                      90
90                      9
60                      50
40                      50

2
90
9
50
50

Hints and Guidelines
We will first input the number n, after that the first n numbers (left half) and sum them up. We will 
then proceed with inputting more n numbers (the right half) and sum them up. We calculate the
difference between the sums by absolute value: Math.Abs(leftSum - rightSum). If the difference 
is 0, print "Yes" + the sum, otherwise print "No" + the difference.

08.Problem: Even / Odd Sum
Write a program that inputs n integers and checks whether the sum of the numbers on even positions
is equal to the sum of the numbers on odd positions. In case the sums are equal, print "Yes" + the 
sum, otherwise, print "No" + the difference. The difference is calculated by absolute value. The format 
of the output must be identical to the examples below.
Sample Input and Output
Input  Output   Input Output     Input  Output 
4      Sum = 70 4     Diff = 1   3      Diff = 2
10              3                5
50              5                8
60              1                1
20              -2               No
Yes             No

Hints and Guidelines
We input the numbers one by one and calculate the two sums (of the numbers on even positions and 
the numbers on odd positions). Identically to the previous problem, we calculate the absolute value 
of the difference and print the result ("Yes" + the sum in case of difference of 0 or "No" + the 
difference in any other case).

09.Problem: Sum of Vowels
Write a program that inputs text (string), calculates and prints the sum of the values of vowels
according to the table below:
a e i o u 
1 2 3 4 5
Sample Input and Output
Input Output Comments      Input  Output  Comments 
hello 6      e+o = 2+4 = 6 bamboo 9     a+o+o = 1+4+4 = 9
Input Output Comments
hi    3      (i = 3) beer 4 e+e = 2+2 = 4
Hints and Guidelines
We read the input text s, null the sum and run a loop from 0 to s.Length-1 (text length -1). We 
check each letter s[i] and verify if it is a vowel, and accordingly, add its value to the sum.

10.Problem: Element Equal to the Sum of the Rest
Write a program that inputs n integers and checks whether among them there is a number equal to 
the sum of all the rest. If there is such an element, print "Yes" + its value, otherwise – "No" + the 
difference between the largest element and the sum of the rest (by absolute value).
Sample Input and Output
Input Output  Comments           Input Output  Comments 
7     Yes     3+4+1+2+1+1=12     3     No       8 |10 – (1 + 1)| = 8
3     Sum=12                     1     Diff=1
4                                1
1                                10
1
2
12
1
Input Output     Input Output    Input Output 
3     No         3     No        4     Yes
1     Diff=1     5     Diff=1    6     Sum=6
1                5               1
1                1               2
                                 3
Hints and Guidelines
We must calculate the sum of all elements, find the largest of them and check the condition.
