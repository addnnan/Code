""" No one likes homework, but your math teacher has given you an assignment to find the sum of the first N numbers

Let’s save some time by creating a program to do the calculation for you!

Take a number N as input and output the sum of all numbers from 1 to N (including N). """
N = int(input())
sum = 0
for var in range(1,N+1):
    sum += var
print(sum)