#include<stdio.h>
#include"operation.h"
// Function to check if two numbers are equal
int is_equal(int a, int b) {
    return a == b; // Returns 1 (true) if a is equal to b, otherwise returns 0 (false)
}

// Function to check if two numbers are not equal
int is_not_equal(int a, int b) {
    return a != b; // Returns 1 (true) if a is not equal to b, otherwise returns 0 (false)
}

// Function to check if the first number is greater than the second
int is_greater(int a, int b) {
    return a > b; // Returns 1 (true) if a is greater than b, otherwise returns 0 (false)
}

// Function to check if the first number is lesser than the second
int is_lesser(int a, int b) {
    return a < b; // Returns 1 (true) if a is lesser than b, otherwise returns 0 (false)
}

// Function to check if the first number is greater than or equal to the second
int is_greater_equal(int a, int b) {
    return a >= b; // Returns 1 (true) if a is greater than or equal to b, otherwise returns 0 (false)
}

// Function to check if the first number is lesser than or equal to the second
int is_lesser_equal(int a, int b) {
    return a <= b; // Returns 1 (true) if a is lesser than or equal to b, otherwise returns 0 (false)
}
