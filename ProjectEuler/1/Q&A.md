## Multiples of 3 and 5

## Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

## Solutions

1. Mysolution: bruteforce using c++ (BruteForce.cpp)
for each number from 1 to 1000 judge if it can be devided by 3 or 5.

2. Assembly Language (I think it little difficult for me mow)

3. Using Maths:  
Seq1: 3,6,9...,996,999 -> A = (3+999)*333/2  
Seq2: 5,10,15,...,995  -> B = (5+995)*199/2  
Seq3: 15,30,...,990    -> C = (15+990)*66/2     (66 come from [1000/15])
So, the answer is A+B-C = 233168