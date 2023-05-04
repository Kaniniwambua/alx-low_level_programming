Bit Manipulation in C

Bit manipulation is the act of manipulating individual bits in a sequence of bits or a binary numeral. In C, we can use bitwise operators to perform bit manipulation. This readme file will give you an introduction to the most commonly used bitwise operators and how to use them in C.
Bitwise Operators

There are six bitwise operators in C

    & (Bitwise AND): Takes two numbers as operands and performs a bitwise AND operation on each bit of the numbers.
    | (Bitwise OR): Takes two numbers as operands and performs a bitwise OR operation on each bit of the numbers.
    ^ (Bitwise XOR): Takes two numbers as operands and performs a bitwise XOR operation on each bit of the numbers.
    ~ (Bitwise NOT): Takes one number as an operand and performs a bitwise NOT operation on each bit of the number.
    << (Bitwise Left Shift): Takes two numbers as operands and shifts the bits of the first number to the left by the number of positions specified in the second number.
    >> (Bitwise Right Shift): Takes two numbers as operands and shifts the bits of the first number to the right by the number of positions specified in the second number.

In addition to the general bitwise operations described above, there are several specific operations that can be performed using bitwise operators:

    Set a Bit: num |= (1 << bit) sets the bit at the specified position in num to 1.
    Clear a Bit: num &= ~(1 << bit) clears the bit at the specified position in num to 0.
    Toggle a Bit: num ^= (1 << bit) toggles the bit at the specified position in num.
    Check if a Bit is Set: (num & (1 << bit)) != 0 checks if the bit at the specified position in num is set (equal to 1).
