// cal_op.h - Header file for arithmetic, bitwise, and relational operations

#ifndef OPERATION_H
#define OPERATION_H

// Arithmetic operation declarations
int add(int a, int b);        // Adds two numbers
int subtract(int a, int b);   // Subtracts two numbers
int multiply(int a, int b);   // Multiplies two numbers
int divide(int a, int b);     // Divides two numbers (with error handling for division by zero)
int modulus(int a, int b);    // Finds the remainder (with error handling for modulus by zero)

// Bitwise operation declarations
int bitwise_and(int a, int b);    // Performs bitwise AND operation
int bitwise_or(int a, int b);     // Performs bitwise OR operation
int bitwise_xor(int a, int b);    // Performs bitwise XOR operation
int bitwise_not(int a);           // Performs bitwise NOT operation
int left_shift(int a, int n);     // Shifts bits of a to the left by n positions
int right_shift(int a, int n);    // Shifts bits of a to the right by n positions

// Relational operation declarations
int is_equal(int a, int b);       // Checks if two numbers are equal
int is_not_equal(int a, int b);   // Checks if two numbers are not equal
int is_greater(int a, int b);     // Checks if the first number is greater than the second
int is_lesser(int a, int b);      // Checks if the first number is lesser than the second
int is_greater_equal(int a, int b); // Checks if the first number is greater than or equal to the second
int is_lesser_equal(int a, int b);  // Checks if the first number is lesser than or equal to the second

#endif // CAL_OP_H
