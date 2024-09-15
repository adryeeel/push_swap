# `Push_swap`

![C Language](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)

`push_swap` is a sorting algorithm project, written in C, where the goal is to sort a stack of integers with a limited set of predefined instructions. The objective is to solve the sorting problem using the fewest possible moves, making it an ideal challenge for optimizing algorithms and learning about efficient data structure manipulation.

## Project Overview

The program must take an unsorted stack of integers provided as arguments and output a series of moves that will result in the stack being sorted in ascending order. Each instruction represents a move in the stack manipulation process, and the goal is to find the optimal sequence of moves to achieve the desired result.

The success of the project is determined by the number of operations used to sort the stack. The subject defines two maximum thresholds for operations that peer's solution must meet to validate the project:

- **700 operations for 100 numbers**: The solution must sort the stack in fewer than 700 operations to reach a minimum pass threshold of 80%. This level shows good performance but leaves room for optimization.

- **5500 operations for 500 numbers**: For full marks, allowing the bonus attempt, the project must complete the sorting task in fewer than 5500 operations for 500 numbers. Achieving this indicates a fully optimized solution that handles edge cases and large inputs efficiently.

My solution is optimized enough to achieve the maximum evaluation, including the bonus.

### Instructions Set

The project allows the use of two stacks to solve the sorting challenge: Stack A (the input stack) and Stack B (an auxiliary stack). To manipulate these stacks, a predefined set of 10 operations is available, each designed to help efficiently sort the numbers by swapping, pushing, and rotating elements between the two stacks. The operations are as follows:

- `pa`: Push the top element of stack B onto stack A.
- `pb`: Push the top element of stack A onto stack B.
- `ra`: Rotate stack A upwards.
- `rb`: Rotate stack B upwards.
- `rr`: Rotate both stacks A and B upwards.
- `sa`: Swap the first two elements at the top of stack A.
- `sb`: Swap the first two elements at the top of stack B.
- `ss`: Swap the first two elements of both stacks A and B.
- `rra`: Reverse rotate stack A (shift downwards).
- `rrb`: Reverse rotate stack B (shift downwards).
- `rrr`: Reverse rotate both stacks A and B.

### The Arguments

The stack to be sorted must be provided as arguments to the `push_swap` program, with the first argument representing the top of the stack.

The project subject mandates input validation to ensure that the arguments are valid. My solution implements the required validations along with some additional ones to handle edge cases and improve robustness:

- **Overflow**: Ensures that the input values fit within the valid range of integers, detecting any overflows or underflows.

- **Non-numeric**: Checks that all arguments are numeric, rejecting any inputs that contain non-numeric characters (e.g., letters or symbols).

- **Quoted**: Handles inputs with numbers enclosed in quotes, ensuring that valid numbers are extracted and processed correctly.

- **Sorted**: Detects if the input is already sorted, in which case no operations are needed.

- **Empty Input**: Rejects empty arguments or entirely missing input, ensuring valid stack entries are provided.

- **Signed Numbers and Empty Signals**: Properly handles positive and negative signs, ensuring valid parsing of signed integers, while also rejecting invalid cases like standalone signs (`+` or `-`) without numbers.

In order to comply with the project subject, my program ensure that the program processes only valid inputs, avoiding crashes or incorrect behavior when faced with invalid or malformed arguments. Case any validation fails, the program outputs `Error\n` and exits with a non-zero value.

#### How It Works

I designed a dedicated argument validation module within my program architecture to handle input processing and ensure that only valid data is passed to the sorting logic. Here's an overview of how it functions:

- **Normalization**: The module first normalizes the input arguments (argv), converting them into a standardized array of strings. This ensures consistent handling of the input, regardless of how the arguments were passed (e.g., as separate numbers or within quotes).

- **Validation**: Once normalized, the module processes this array to apply a series of validation checks, ensuring that the input adheres to the required constraints. It validates against cases like overflow, non-numeric characters, empty signals, and more (as described above).

- **Conversion**: If all validation checks are passed, the valid input is then converted from strings to numeric values. These values are appended to my `t_stack` data structure, which represents the stack that will be sorted.

This modular approach not only keeps the argument validation process clean and isolated but also makes the code more maintainable for future improvements or additional checks.

### The Algorithm

### Bonus

## Key Features

## Usage

## Evaluation

## Feedback and Support

If you encounter any issues or have suggestions for improving the project, please open an issue on GitHub. I'm very glad to receive feedbacks on my projects!

## License

This project is licensed under the [MIT License](LICENSE).
