## Problem 1:
Write a C program which displays a menu. The menu will show all the 10 problems of 
assignments number 2 (given below). The program should prompt the user to enter the 
number of the assignment problem. If the user enters 3 then the code for Problem # 3 should 
execute. You can call the executable of your programs.

For calling executables you’ll need to include stdlib header file, and call system function as 
given below:

```system("filename.exe");```

## Problem 2:
Create a game of guessing a number. The game will ask the user to think a number between 1 and 100. Then it will keep on asking the user if the number is greater than 50 or not, if the user says yes then it again asks if it’s greater than 75 or not …….. So it will half the search space each time and will finally display the answer.

## Problem 3:
Write a C code that given a date (year, month and day) finds and displays the next date. Consider all the details while solving the problem such as If the day entered is the last day of the month then it should display 1st of the next month and if the month is also the last month of the year then it should display 1st January of the next year. Also consider the leap year.

## Problem 4:
Given an age guess out if someone is a baby, toddler, child, teenager, adult or an old codger.

## Problem 5:
Take an integer from user and tell if it is a positive even number, or positive odd, or negative even or negative odd. For example, -4 is negative even, 13 is positive odd etc.

## Problem 6:
Write a C code which takes two inputs X and Y, and displays “True” If number X is a multiple of number Y, and displays “False” otherwise.

## Problem 7:
Write a program that takes an alphabet from the user and tells if it is a vowel or not. User can give an alphabet in lower case or upper case i.e. ‘a’ and ‘A’ are both vowels.

## Problem 8:
Write a program that takes 10 numbers from user. Calculate and display average of these numbers. Then tell how many of these 10 numbers are above average and how many are below average.

## Problem 9:
An Auto Insurance Program
- Example - Write a program to determine the cost of an automobile insurance premium, 
based on driver's age and the number of accidents that the driver has had.
- The basic insurance charge is 500 Rs. There is a surcharge of 100 Rs if the driver is under 25 and there is an additional surcharge for accidents as can be seen below:

| No. of accidents | Accident Surcharge |
| - | - |
| 1 | 50 |
| 2 | 125 |
| 3 | 225 |
| 4 | 375 |
| 5 | 575 |
| 6 or more | No Insurance |

## Problem 10:
Write a program that recommends the number of calories a person should eat each day. Calories are units of energy found in all foods. Base your recommendation on the person's weight and whether the person has an active or sedentary(inactive) lifestyle. If the person is sedentary, that person's activity factor is 13. If the person is active, that person's activity factor is 15. Multiply the activity factor by the person's weight to get the recommended number of calories. Start your program by:
- having the user enter their weight, as a floating point number; 
- having the user enter whether they have active or sedentary lifestyle, as a character, 'A' for active or 'S' sedentary; 
- use a switch (or else if) selection statement to use the appropriate calculation for the recommended calories for the selected lifestyle.
- print out your results on the screen.