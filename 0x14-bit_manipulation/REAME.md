Bit Manipulation in C

This readme provides an introduction to bit manipulation in the C programming language. It covers the basic concepts, bitwise operators, and common techniques used in bit manipulation.
Bitwise Operators in C

C provides several bitwise operators that allow you to manipulate individual bits within data. These operators operate on integer types (int, unsigned int, etc.) at the bit level. The following are the commonly used bitwise operators in C:

    AND (&): Performs a bitwise AND operation on two operands, resulting in a value where each bit is set if and only if the corresponding bits of both operands are set.
    OR (|): Performs a bitwise OR operation on two operands, resulting in a value where each bit is set if either of the corresponding bits of the operands is set.
    XOR (^): Performs a bitwise XOR (exclusive OR) operation on two operands, resulting in a value where each bit is set if the corresponding bits of the operands are different.
    NOT (~): Performs a bitwise NOT operation on a single operand, resulting in a value where each bit is inverted (flipped).
    Left Shift (<<): Shifts the bits of the left-hand operand to the left by a specified number of positions.
    Right Shift (>>): Shifts the bits of the left-hand operand to the right by a specified number of positions.

Common Bit Manipulation Techniques in C

Here are some common bit manipulation techniques that can be used in C programming:

    Setting a Bit: To set a specific bit (make it 1) in an integer, you can use the bitwise OR operator (|) with a mask that has only the desired bit set.


num = num | (1 << bit_position);

    Clearing a Bit: To clear a specific bit (make it 0) in an integer, you can use the bitwise AND operator (&) with a mask that has all bits set except the desired bit.


num = num & ~(1 << bit_position);

    Toggling a Bit: To toggle a specific bit (change its value to the opposite), you can use the bitwise XOR operator (^) with a mask that has only the desired bit set.


num = num ^ (1 << bit_position);

    Checking if a Bit is Set: To check if a specific bit is set (equals 1), you can use the bitwise AND operator (&) with a mask that has only the desired bit set and compare the result to zero.


is_set = (num & (1 << bit_position)) != 0;

    Bit Counting: To count the number of set bits (1s) in an integer, you can use the bitwise AND operator (&) and a loop to iterate over the bits.


int count = 0;
while (num > 0) {
    count += num & 1;
    num >>= 1;
}

These techniques demonstrate the basic usage of bitwise operators for bit manipulation in the C programming language. Bit manipulation can be powerful for tasks such as data compression, flag handling, and efficient storage of binary data.
