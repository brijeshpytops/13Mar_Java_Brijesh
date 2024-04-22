/*
In C programming, data types specify the type of data that variables can store. Each data type has specific characteristics, such as the range of values it can hold and the operations that can be performed on it. Data types in C can be broadly categorized into the following groups:

Basic Data Types:
----------------

int: Used to store integer values. It can hold both positive and negative whole numbers. (10, 1000, -25)

float: Used to store single-precision floating-point numbers, which can hold fractional values.(10.0,-4.5)

double: Used to store double-precision floating-point numbers, providing greater precision than float.(100.0,-41.5)

char: Used to store a single character. It typically occupies 1 byte of memory. ('a', 'Z')

void: Represents the absence of type or an empty type. It is commonly used in function return types or pointer types.



Derived Data Types:
------------------

Array: A collection of similar data items stored at contiguous memory locations. (int numbers[30] = {10, 20, 30, 40, 50})

Pointer: A variable that stores the memory address of another variable. Pointers are used for dynamic memory allocation and manipulating arrays and strings efficiently. (*num)

Structure: A user-defined data type that groups together variables of different data types under a single name. 
struct book {
    float price = 20.5,
    int page = 300
}

Union: A special data type that allows storing different data types in the same memory location. However, only one member of the union can hold a value at any given time.

union book {
    float price = 20.5,
    int page = 300
}

Enum: A user-defined data type used to assign names to integral constants, making the code more readable and maintainable.

enum colors {
    RED,    // Assigned 0
    BLUE,   // Assigned 1
    PINK, // Assigned 2
    WINE,  // Assigned 3
    Z_BLUE,    // Assigned 4
};

Modifier Types:
--------------
signed: Specifies that a data type can represent both positive and negative values. (-34, +34)

unsigned: Specifies that a data type can only represent non-negative values. (34)

short: Specifies a smaller range of values for the data type.

long: Specifies a larger range of values for the data type.

*/