# push_swap

![C Language](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)

`push_swap` is a sorting algorithm project, written in C, where the goal is to sort a stack of integers with a limited set of predefined instructions. The objective is to solve the sorting problem using the fewest possible moves, making it an ideal challenge for optimizing algorithms and learning about efficient data structure manipulation.

## Project Overview

The program must take an unsorted stack of integers provided as arguments and output a series of moves that will result in the stack being sorted in ascending order. Each instruction represents a move in the stack manipulation process, and the goal is to find the optimal sequence of moves to achieve the desired result.

The success of the project is determined by the number of operations used to sort the stack. The subject defines two maximum thresholds for operations that your solution must meet to validate the project:

- **700 operations for 100 numbers**: Your solution must sort the stack in fewer than 700 operations to reach a minimum pass threshold of 80%. This level shows good performance but leaves room for optimization.

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

### The algorithm

## Key Features

## Usage

## Evaluation

## Feedback and Support

If you encounter any issues or have suggestions for improving the project, please open an issue on GitHub. I'm very glad to receive feedbacks on my projects!

## License

This project is licensed under the [MIT License](LICENSE).
