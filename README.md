# Maximum Value of a String in an Array

This project implements a solution to LeetCode problem #2496.

## Problem Description

Given an array `strs` of strings, we need to calculate the maximum score of any string in `strs`.

The score of a string is calculated as follows:
- If the string contains only digits, the score is the integer value of the string
- Otherwise, the score is the length of the string

### Examples

**Example 1:**
```
Input: strs = ["alic3","bob","3","4","00000"]
Output: 5
Explanation: 
- "alic3" consists of both letters and digits, so its value is its length, i.e. 5
- "bob" consists only of letters, so its value is its length, i.e. 3
- "3" consists only of digits, so its value is its integer value, i.e. 3
- "4" also consists only of digits, so its value is 4
- "00000" consists only of digits, so its value is 0
Hence, the maximum value is 5, of "alic3".
```

**Example 2:**
```
Input: strs = ["1","01","001","0001"]
Output: 1
Explanation: 
All strings in this example have the same integer value of 1, so the maximum value is 1.
```

## Building and Testing

This project uses CMake for building and Google Test for unit testing. 

### Prerequisites
- CMake
- C++ compiler
- Google Test

### Build Instructions
```bash
cmake -B build
cmake --build build
```

### Running Tests
```bash
cd build && ctest
```

## Project Structure
- `src/` - Contains the source code implementation
- `test/` - Contains the Google Test based unit tests
- `CMakeLists.txt` - CMake build configuration
