TASKS

0. Create a function that prints a name when provided with one.

Function Prototype: void print_name(char *name, void (*f)(char *));

1. Develop a function that applies another function to each element of an array.

Function Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

2. Write a function to search for an integer in an array.

Function Prototype: int int_index(int *array, int size, int (*cmp)(int));

3. Build a program that performs simple arithmetic operations.

Usage: calc num1 operator num2

Assumptions: num1 and num2 are integers, so use atoi to convert them from string input to int.

Supported operators: + (addition), - (subtraction), * (multiplication), / (division), % (modulo).

Program output: Print the result of the operation, followed by a new line.

Error handling:
- If the number of arguments is incorrect, print "Error," followed by a new line, and exit with status 98.
- If the operator is not one of the supported operators, print "Error," followed by a new line, and exit with status 99.
- If the user tries to divide (/ or %) by 0, print "Error," followed by a new line, and exit with status 100.

Files to create:

3-calc.h: Contains function prototypes and data structures.

3-op_functions.c: Contains the following functions:
- op_add: Returns the sum of two integers. Prototype: int op_add(int a, int b);
- op_sub: Returns the difference of two integers. Prototype: int op_sub(int a, int b);
- op_mul: Returns the product of two integers. Prototype: int op_mul(int a, int b);
- op_div: Returns the result of the division of two integers. Prototype: int op_div(int a, int b);
- op_mod: Returns the remainder of the division of two integers. Prototype: int op_mod(int a, int b);

3-get_op_func.c: Contains the function that selects the correct operation function based on the operator provided by the user.
- Prototype: int (*get_op_func(char *s))(int, int);
- Returns a pointer to the function that corresponds to the operator.
- If the operator is not recognized, return NULL.

3-main.c: Contains the main function.
- Use atoi to convert arguments to integers.
- Do not directly call op_add, op_sub, op_mul, op_div, or op_mod from the main function.
- Allowed to use a maximum of 3 if statements.

4. Create a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes

Output format:
- Print opcodes in hexadecimal (lowercase).
- Each opcode should be two characters long.
- End the listing with a new line.

Error handling:
- If the number of arguments is incorrect, print "Error," followed by a new line, and exit with status 1.
- If the number of bytes is negative, print "Error," followed by a new line, and exit with status 2.

You can use printf and atoi for this task.
