# Simple Calculator in C
This is a basic calculator program written in C that performs arithmetic operations based on user input via command-line arguments.

## Usage
To use the calculator, provide three arguments:

```bash
./calc <number1> <operator> <number2>
```

#### Example
```bash
./calc 1 + 5
```

## Supported Operators
- \+ (Addition)
- \- (Subtraction)
- \* (Multiplication)
- \/ (Division)

## Error Handling
- If the number of arguments is not exactly 3, the program will return an error.
- Division by zero will result in an error message.

## Compilation
Use the provided Makefile to compile the program:
```bash
make
```

To clean up generated files:
```bash
make clean
```