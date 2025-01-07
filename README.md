# Push Swap Project

The **Push Swap** project is part of the **École 42** curriculum. In this project, you will implement a sorting algorithm that uses a **stack-based sorting approach**. The goal is to sort a set of integers using only a limited set of operations and without using standard sorting functions like `qsort()`. 

This project focuses on the implementation of **sorting algorithms**, **stack operations**, and **optimization techniques**.

## Project Description

The **Push Swap** project requires you to sort a list of integers using two stacks and a set of specific operations. You cannot use any standard sorting functions, and the number of operations must be minimized to meet the project requirements.

The operations allowed are:

- **sa**: Swap the first two elements of stack `a`.
- **sb**: Swap the first two elements of stack `b`.
- **ss**: Swap the first two elements of both `a` and `b`.
- **pa**: Push the top element of stack `b` onto stack `a`.
- **pb**: Push the top element of stack `a` onto stack `b`.
- **ra**: Rotate stack `a` (move the first element to the end).
- **rb**: Rotate stack `b` (move the first element to the end).
- **rr**: Rotate both stacks `a` and `b`.
- **rra**: Reverse rotate stack `a` (move the last element to the front).
- **rrb**: Reverse rotate stack `b` (move the last element to the front).
- **rrr**: Reverse rotate both stacks `a` and `b`.

### The goal of the project is to sort the integers in **stack `a`** using the least number of operations, moving elements between stacks `a` and `b`.

## Objectives

- Implement a sorting algorithm that works with two stacks.
- Minimize the number of operations used for sorting the integers.
- Gain proficiency with stack-based algorithms and operations.
- Understand and apply optimization techniques for sorting.
- Handle edge cases such as already sorted input, reverse order, and large numbers of elements.

### Key Concepts:
- **Stacks**: Implement and manipulate two stacks.
- **Optimization**: Minimize the number of operations to meet project constraints.
- **Sorting Algorithms**: Implement sorting with the stack-based operations allowed.

## Technologies Used

- **C**: The project is implemented in the C programming language.
- **Makefile**: For compiling the project and managing dependencies.

## DISCLAIMER

I refused to use the usual sorting method that we could find backk then on the internet. Hence, my algo is sub optimal at best. Do not copy.
