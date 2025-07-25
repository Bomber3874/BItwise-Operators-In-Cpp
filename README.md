# Bitwise-Operators-In-Cpp

# AIM - To understand and implement Bitwise operators in C++

# Software Used 

Visual Studio Code

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

# Algorithm For Setting and Resetting Bits
1. Initialize variables:

    i = 50 (the initial number)

    Declare bit_to_be_set, set, bit_to_be_reset, reset

2.Input:

    Prompt the user to enter the bit position they want to set (bit_to_be_set)

    Read the value of bit_to_be_set from user input

3.Set a bit:

    Compute set = i | (1 << bit_to_be_set)

        This shifts 1 left by bit_to_be_set positions to create a mask

        Bitwise OR | with i sets the bit at the chosen position without changing other bits

4.Input:

    Prompt the user to enter the bit position they want to reset (bit_to_be_reset)

    Read the value of bit_to_be_reset from user input

5.Reset a bit:

    Compute reset = i & (~(1 << bit_to_be_reset))

        Shift 1 left by bit_to_be_reset to create a mask for that bit

        Apply bitwise NOT ~ to flip the bits of the mask

        Bitwise AND & with i clears (resets) the bit at the chosen position

6.Output:

    Print the value of set (number after setting the bit)

    Print the value of reset (number after resetting the bit)

7.End program

# Conclusion 

In this experiment, we successfully understood and implemented various bitwise operators in C++. Bitwise operations work directly on the binary representation of integers, allowing for highly efficient manipulation of data at the bit level. These operators are particularly useful in systems programming, embedded systems, cryptography, and performance-critical applications. Additionally, we learned how to set and reset specific bits using bitwise shift and masking techniques. Mastering bitwise operations provides deeper control over hardware-level tasks and enables optimization of memory and processing efficiency in C++ programs.
