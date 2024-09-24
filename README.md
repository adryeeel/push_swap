# `Push_swap`: Learning how to sort efficiently

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

I implemented each `push_swap` operation in the `push_swap/acts/` directory, focusing on minimizing code indentation and redundancy for repeated operations. To achieve this, each function is designed to internally manage repetition using a `while` loop, which executes the operation a specified number of times based on the `n` argument.

This approach keeps the code cleaner and more maintainable, while also reducing the need for repetitive code blocks in the sorting moudule, making the operations more efficient and easier to follow.

### Stack

I developed a dedicated **stack handling module** for my application, which serves as the foundation for all stack manipulations, from creation to destruction. This module abstracts the complexity of stack operations and ensures efficient handling of the stack during the sorting process.

#### Data Structure Design

I began by creating the `t_stack` data structure, which is a `struct` that contains key members to optimize the sorting process:

- **`min`**: The index of the minimum value in the stack.
- **`max`**: The index of the maximum value in the stack.
- **`data`**: An integer array that stores the values in the stack.
- **`size`**: The current length of the stack (i.e., the number of elements).

The **`data`** member is a simple integer array. During the planning phase, I considered using a singly linked list to store the stack's data, as linked lists are often more flexible for dynamic data. However, after discussing with some peers, I opted for an array-based approach because of its simplicity and faster access times, which are critical for the high-performance requirements of this project. Arrays provide constant-time access (`O(1)`) to elements by index, making operations like finding the minimum or maximum more efficient.

The inclusion of the **`size`** member required implementation of size-tracking logic across all stack operations to ensure accurate updates whenever elements were added or removed. This tracking was essential for maintaining the integrity of the stack and was seamlessly integrated into the stack manipulation functions.

This feature became crucial for my sorting algorithm, which relies heavily on index-to-size comparisons for determining the stack's current state and making efficient sorting decisions.

#### Core Stack Operations

Within this module, I implemented five core operations, corresponding to the basic manipulation functions needed for the stack instruction set:

- **[`ft_stack_pop()`](push_swap/stack/ft_stack_pop.c)**: Removes the top element from the stack. This function is crucial for implementing operations like `pa` and `pb` (push between stacks).

- **[`ft_stack_push()`](push_swap/stack/ft_stack_push.c)**: Adds a new element to the top of the stack. This is used when transferring elements between Stack A and Stack B.

- **[`ft_stack_swap()`](push_swap/stack/ft_stack_swap.c)**: Swaps the top two elements of the stack. This operation is used in instructions like `sa`, `sb`, and `ss` (swap operations for both stacks).

- **[`ft_stack_rotate()`](push_swap/stack/ft_stack_rotate.c)**: Rotates the stack upwards, moving the top element to the bottom. This is essential for implementing the `ra`, `rb`, and `rr` operations (rotation).

- **[`ft_stack_rrotate()`](push_swap/stack/ft_stack_rrotate.c)**: Reverse rotates the stack, moving the bottom element to the top. This is used in the `rra`, `rrb`, and `rrr` operations (reverse rotation).

#### Integration with Instruction Set

These core stack functions serve as the building blocks for the **[instruction set](#instructions-set)** that manipulates the stacks during sorting. In some cases, I combined multiple stack operations to implement more complex behaviors, such as rotating or swapping both stacks at once. By abstracting these operations into simple functions, the code remains clean, maintainable, and easy to extend with new features or optimizations.

This module plays a key role in ensuring the efficiency and correctness of my sorting algorithm, as it directly impacts the performance of the stack manipulations that are at the heart of the project.

### Arguments

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

### The Solver Algorithm

My solver algorithm is inspired by the Turk Algorithm by [A. Yigit Ogun](https://medium.com/@ayogun/push-swap-c1f5d2d41e97). While following his approach, I developed a faster, optimized version of my own.

The sorting process begins in the [`ft_stack_sort.c`](push_swap/stack/ft_stack_sort.c) function, which implements a divide-and-conquer strategy to handle stacks of varying sizes.

- For stacks with **two elements**, a simple swap operation suffices to sort them.

- For **three elements**, at most two operations are needed, though often only one is required.

- For stacks with **more than three elements**, the algorithm becomes more complex. The goal is to efficiently push elements from stack A to stack B, leaving only three elements in stack A. Once stack A is reduced, stack B will be sorted in descending order. This setup minimizes the number of rotations when pushing elements back from B to A.

#### Finding the Optimal Element

When pushing an element, either from A to B or B to A, the key is to find the optimal element &ndash; the one that requires the fewest operations to be placed in the correct position in the other stack.

To identify this optimal element, I developed the [ft_find_least_sa.c](push_swap/solve/find/ft_find_least_sa.c) and [ft_find_least_sb.c](push_swap/solve/find/ft_find_least_sb.c) functions. These functions utilize [ft_calc_total_ops.c](push_swap/solve/calc/ft_calc_total_ops.c) to calculate the total number of operations required for each element, based on its index in the stack.

By iterating over each stack and calculating the operation cost for every element, the function returns the index of the element with the minimal required operations. This helps ensure that each push is as efficient as possible.

#### Calculating the Sorting Cost

The calculation step is one of the most interesting parts of the algorithm. It's always based on each element's index because the index itself gives a rough estimate of how many operations will be needed to bring that element to the top of the stack.

To push an element from position `x` in stack A to position `y` in stack B, we must first rotate the elements at positions `x` and `y` to the tops of their respective stacks. By examining the index of each element, we can estimate the number of operations required.

For example, consider an element in stack A at index 2 that needs to be placed in stack B at index 1. To achieve this, the element in stack A will require two `ra` (rotate A) operations to bring it to the top, while the element in stack B will require one `rb` (rotate B) operation. This results in a total of three operations.

However, simply summing the indices of the elements is not always the most efficient approach. The algorithm includes several conditions that help calculate the minimal number of operations more accurately.

In a simplified approach, I divided the calculation process into four distinct cases, each handled by a separate function:

- **[`ft_calc_ra_rb.c`](push_swap/solve/calc/ft_calc_ra_rb.c)**: This function calculates the number of operations required when both elements are located in the first half of their respective stacks. It effectively returns the maximum number of operations needed between the two elements. By using this approach, we can include the possibility of performing simultaneous `rr` (rotate both) operations, reducing the total number of moves.

- **[`ft_calc_ra_rrb.c`](push_swap/solve/calc/ft_calc_ra_rrb.c)**: This function calculates the number of operations needed when the element in stack A is in the first half and needs to be rotated up using `ra`, while the element in stack B is in the second half and requires reverse rotation (`rrb`). It sums the necessary `ra` and `rrb` operations, optimizing the move based on each element's position.

- **[`ft_calc_rra_rb.c`](push_swap/solve/calc/ft_calc_rra_rb.c)**: This function calculates the operations required when the element in stack A is in the second half and will use reverse rotation (`rra`), while the element in stack B is in the first half and needs forward rotation (`rb`). It combines the `rra` and `rb` operations, ensuring the minimum number of moves for this configuration.

- **[`ft_calc_rra_rrb.c`](push_swap/solve/calc/ft_calc_rra_rrb.c)**: This function handles the scenario where both elements are in the second half of their respective stacks. It returns the maximum number of operations between the two elements, allowing for the inclusion of simultaneous `rrr` (reverse rotate both) operations to reduce the total number of moves.

#### Executing the Sorting Operations

Once the optimal element to push and its final position in the other stack are determined, the algorithm proceeds with executing the necessary sorting operations. The execution logic mirrors the calculation step, falling into one of the four cases depending on the relative positions of the elements in both stacks.

However, several key optimizations are applied during the execution process, especially when dealing with elements in different halves of their respective stacks. These optimizations aim to reduce the total number of operations:

- **Minimizing Redundant Rotations**: If one stack requires forward rotation (`ra` or `rb`) while the other needs reverse rotation (`rra` or `rrb`), the algorithm carefully balances these operations to avoid unnecessary rotations.
- **Combined Operations**: When possible, simultaneous operations like `rr` or `rrr` (which rotate both stacks at once) are used to minimize the total number of moves. This is particularly beneficial when elements are in the same half of their stacks.

- **Smart Rotation Choices**: For cases involving different halves, the algorithm intelligently decides whether to rotate or reverse-rotate a stack based on two possibles optimizations. Check the [`ft_exec_rra_rb.c`](push_swap/solve/exec/ft_exec_rra_rb.c) or [`ft_exec_ra_rrb.c`](push_swap/solve/exec/ft_exec_ra_rrb.c) to see the implementation.

- **Detection for Sort**: If after one push the remaining stack is already in its expected form, the algorithm is smart enough to not execute unecessary movements and go to the next step.

All of this logic is executed in two main functions:

- **[`ft_sort_exec_sb.c`](push_swap/solve/exec/ft_sort_exec_sb.c)**: This function sorts all the elements of stack A by pushing them to stack B in descending order. It continues this process until only three elements remain in stack A, which will be handled separately.

- **[`ft_sort_exec_sa.c`](push_swap/solve/exec/ft_sort_exec_sa.c)**: Once stack A is reduced to three elements, this function pushes the elements from stack B back to stack A. It carefully places each element in its correct position, ensuring stack A is fully sorted by the time stack B is empty.

#### Final Step

After stack A is fully sorted, the lowest element may not always be positioned at the top. When this occurs, the algorithm employs a rotation strategy to bring the lowest element to the top, ensuring the stack is in the correct final order.

### Bonus

The bonus for this project involves developing a `checker` program that verifies the correctness of the `push_swap` operations.

The `checker` program takes an initial stack as input, using the same format as the `push_swap` solver (a sequence of integers), and ensures that the operations performed lead to a correctly sorted stack.

#### Arguments Validation

The `checker` program accepts a stack as an argument, and to maintain consistency, I reused the same argument validation logic from the `push_swap` program. This ensures that the input is handled identically in both programs, which is important for preventing inconsistencies in stack creation and validation.

#### Reading Operations

Once a valid stack is provided, the program proceeds to read the stack operations from `STDIN`. Each input operation (e.g., `sa`, `ra`, `pb`) is validated. If an invalid operation is detected, the program immediately exits and displays an `Error` message.

To optimize performance and improve readability, the program parses each movement into an enumerated value and stores it in an integer array. This approach reduces the overhead associated with string manipulation, which can slow down the program. Storing movements as integers simplifies the execution phase and makes the code more efficient.

When the `read` function detects the `EOF` signal, the input phase ends, and the program proceeds to execute the movements.

#### Executing the Movements

The `checker` program initializes stack A with the values provided as arguments. It then applies the movements stored in the array to both stack A and stack B, simulating the sorting process. Once all the movements are applied, the program verifies whether stack A is sorted in ascending order and whether stack B is empty.

#### Printing the Result

After executing the movements, the program determines the outcome:

- If stack A is sorted in ascending order and stack B is empty, the program prints `OK`, indicating that the sorting operations were successful.

- If the stack is not correctly sorted or stack B is not empty, the program prints `KO`, signaling that the operations did not result in the expected outcome.

This structure ensures that the `checker` program provides accurate feedback on the correctness of the `push_swap` operations, serving as a tool for validating sorting sequences.

## Usage

- `git clone https://github.com/adryeeel/push_swap.git`

- `cd push_swap`

### Build `push_swap`

- `make`

- `./push_swap/push_swap [STACK]`

### Build `checker`

- `make bonus`

- `./checker/checker [STACK]`
  
- Input the [sort movements](#core-stack-operations)

- Hit `CTRL+D` to finish the input

## Evaluation

:construction: Waiting for evaluation.

## Feedback and Support

If you encounter any issues or have suggestions for improving the project, please open an issue on GitHub. I'm very glad to receive feedbacks on my projects!

## License

This project is licensed under the [MIT License](LICENSE).
