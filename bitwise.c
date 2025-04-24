#include<stdio.h>
#include"operation.h"
// Function for bitwise AND
int bitwise_and(int a, int b) {
    return a & b; // Performs AND operation between the bits of 'a' and 'b'
}

// Function for bitwise OR
int bitwise_or(int a, int b) {
    return a | b; // Performs OR operation between the bits of 'a' and 'b'
}

// Function for bitwise XOR
int bitwise_xor(int a, int b) {
    return a ^ b; // Performs XOR operation between the bits of 'a' and 'b'
}

// Function for bitwise NOT
int bitwise_not(int a) {
    return ~a; // Inverts all the bits of 'a'
}

// Function for left shift
int left_shift(int a, int n) {
    return a << n; // Shifts the bits of 'a' to the left by 'n' positions
}

// Function for right shift
int right_shift(int a, int n) {
    return a >> n; // Shifts the bits of 'a' to the right by 'n' positions
}

