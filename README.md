# N-queens-validator

The code which takes N queens, and takes an array, which positions the queens stand on the NxN board. The goal is to check if all the queens are not in the same line or diagonal, and if some queens are, show which queens intercept. 

Language: C

Input: number of queens N, array of the queen positions of size N.

Output: The code checks if either the queens are not in the same line or diagonal, and if some queens intercept, it produces all the pairs of queens, which intercept.

An example: 

N=8;

arr=({2,4,6,8,1,3,5,7});

This mean that we have 8 queens, and each element in array describe a different column. So in this example, the queen positions (X,Y) would be (1,2), (2,4), (3,6), (4,8), (5,1), (6,3), (7,5), (8,7).
