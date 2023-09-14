## Problem 1:
In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of the total population, write a program to find the totalnumber of illiterate men and women if the population of town is 80,000.
## Problem 2:
When Cheryl Harrison began her trip from New York to Wyoming; she filled her car’s tank with gas and reset its trip meter to zero. After traveling 324 miles, Cheryl stopped at a gas station to refuel; the gas tank required 17 gallons. Cheryl wants a program that calculates and displays her car’s gas mileage at any time during the trip. The gas mileage is the number of miles her car was driven per gallon of gas. Write a C++ code. 
## Problem 3:
The manager of the Lakeview Hotel wants a program that calculates and displays a guest's total bill. Each guest pays a room charge that is based on a per-night rate. For example if the per night rate is $100 and the guest stays two nights, the room charge is $200.Customer also may incur a one-time room service charge and a one-time telephone charge.
## Problem 4:
Write a C code that will calculate the roots of a quadratic equation ax^2 + bx + c = 0. 

Hint: 
- Calculate the discriminant, d = sqrt(b^2 - 4ac)
- The roots are calculated as follows:
    - x1 = (–b + d) / (2a)
    - x2 = (–b – d) / (2a)
Use the sqrt function from cmath.
## Problem 5:
Hero’s Formula is A method for calculating the area of a triangle when you know the lengths of all three sides. Let a, b, c be the lengths of the sides of a triangle. The area is given by:
$$ A = \sqrt{p(p-a)(p-b)(p-c)} $$
where
$$ p = \frac{a+b+c}{2} $$
2
Write a C++ code to calculate area of triangle using above method. Take the three lengths of the triangle from the user and display the area that your program calculates.
## Problem 6:
Area of a trapezoid can be calculated by the following formula:
$$ A = (b1+b2)*\frac{h}{2}$$
where b1 and b2 are the parallel sides or the bases and h is length of height.

Write a C++ code to calculate area of a trapezoid using above method. Take required inputs from the user and display the area that your code calculates.

## Problem 7:
Write a C code which can calculate volume of the 3D objects i.e. box, prism, cylinder and sphere. Take necessary inputs from the user and display the results.
- Volume of a box = l x w x h
  - l = length, w = width, h = height
- Volume of a sphere = $\frac{4}{3} * \pi * r^3$
  - r = radius of sphere
- Volume of prism = AofT x H
  - $ AofT = \frac{1}{2} * b * h $
  - b = base of triangle, h = height of triangle, H = height of the triangular prism
- Volume of a cylinder = $ \pi * r^2 * H $
  - r = radius of the circle of the base, H = height of cylinder

## Problem 8:
Write a C code to evaluate the following series up to three significant digits 
$$sin(x) = x − (x^3 / 3!) + (x^5 / 5!) − (x^7 / 7!) ...$$
- Note: You are not allowed to use loops, manually run the series till enough accuracy.

## Problem 9:
1. to compute the distance between two points A and B where each point has two values x and y. i.e. A(x1, y1), B(x2, y2)
$$distance = d = \sqrt{(x2 - x1)^2 - (y2-y1)^2}$$
2. Modify the code in part 1 and calculate the distance between 3 points. You have to calculate the distance between A and B, B and C, and finally between A and C. Now consider that these three points are forming a triangle. Develop a logic that can lead to calculate the area of this triangle. Implement your logic in C++. Take necessary inputs and display the results.

## Problem 10:
For the following set of sample data, compute the standard deviation and mean.

X = -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
$$ mean = \mu = \frac{1}{N} \sum_{i=1}^{N} x_i $$
$$ standard \space deviation = \sigma = \sqrt{\frac{1}{N}\sum_{i=1}^{N}(x_i - \mu)^2}