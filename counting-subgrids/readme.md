# Counting Subgrids

## Approach

The problem is to count the number of subgrids in a matrix where each subgrid consists of only 1s. The algorithm efficiently calculates this count using bitwise operations and mathematical formulas.

## Steps

1. **Read input matrix `b`**:
   - Read the input matrix `b` from the input file `sample_in.txt`.
   - Calculate the dimensions `n` of the input matrix.

2. **Convert rows to integers**:
   - Initialize an empty vector `row` of size `n` to store the integer representation of each row of the matrix.
   - Convert each row of the matrix into an integer representation by treating each row as a binary number.

3. **Count common set bits**:
   - Iterate through each pair of rows in the matrix.
   - Count the number of common set bits between them using the bitwise AND operation.

4. **Calculate subgrid count**:
   - Calculate the number of subgrids formed by the common set bits using the formula `(bits * (bits - 1)) / 2`.

5. **Total subgrid count**:
   - Add the count of subgrids formed by each pair of rows to the total count.

6. **Output result**:
   - Output the total count of subgrids to the output file `sample_out.txt`.

## Implementation Details

- Read the input matrix `b` from the input file `sample_in.txt`.
- Convert each row of the matrix into an integer representation.
- Iterate through each pair of rows and count the number of common set bits.
- Calculate the number of subgrids formed by each pair of rows and add them to the total count.
- Output the total count of subgrids to the output file `sample_out.txt`.


## Complexity Analysis

- **Time Complexity:** The algorithm iterates through each pair of rows and calculates the common set bits, resulting in a time complexity of O(n^2), where n is the number of rows in the matrix.
- **Space Complexity:** The space complexity is O(n) to store the integer representations of the rows.