# BItwise-Operators-In-Cpp

# AIM - To understand and implement Bitwise operators in C++

# Theory

Bitwise operators perform operations directly on the binary representations of integers. They are especially useful in low-level programming, such as hardware control, cryptography, and performance optimization.
1. & (Bitwise AND)

    Compares each bit of two numbers.

    Result bit is 1 only if both corresponding bits are 1.

    Example: 5 & 3 → 0101 & 0011 = 0001 → Result: 1
   
3. | (Bitwise OR)

    Compares each bit of two numbers.

    Result bit is 1 if at least one of the corresponding bits is 1.

    Example: 5 | 3 → 0101 | 0011 = 0111 → Result: 7
   
5. ^ (Bitwise XOR)

    Compares each bit of two numbers.

    Result bit is 1 only if the corresponding bits are different.

    Example: 5 ^ 3 → 0101 ^ 0011 = 0110 → Result: 6
   
7. ~ (Bitwise NOT / One's Complement)

    Inverts each bit (changes 1 to 0 and 0 to 1).

    Applied to a single operand.

    Example: ~5 → ~0101 = 1010 (in 8-bit: 11111010) → Result: -6 (two's complement form)
   
9. << (Left Shift)

    Shifts bits to the left by a specified number of positions.

    Each left shift multiplies the number by 2.

    Example: 5 << 1 → 0101 << 1 = 1010 → Result: 10
   
6. >> (Right Shift)

    Shifts bits to the right by a specified number of positions.

    Each right shift divides the number by 2 (for positive numbers).

    Example: 10 >> 1 → 1010 >> 1 = 0101 → Result: 5
