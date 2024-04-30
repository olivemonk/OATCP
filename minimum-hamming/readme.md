# Minimum Hamming

## Approach

The problem is to find the minimum Hamming distance between all pairs of integers in an array. The algorithm efficiently calculates this distance using bitwise operations.

## Steps

1. **Read input vector `v`**:
   - Read the input vector `v` containing integers from the input file `input2.txt`.
   - Calculate the size `n` of the input vector.

2. **Iterate through each bit position**:
   - Iterate through each bit position from 0 to 31.
   - Initialize a variable `cnt` to count the number of integers with the bit set at the current bit position.
   - Iterate through each integer in the input vector and count the number of integers with the bit set at the current bit position.
   - Update `ans` by adding the product of `cnt` and `(n - cnt)`.

3. **Output result**:
   - Output the result `ans` to the output file `output2.txt`.

## Implementation Details

- Read the input vector `v` from the input file `input2.txt`.
- Calculate the size `n` of the input vector.
- Iterate through each bit position and count the number of integers with the bit set at that position.
- Calculate the minimum Hamming distance using the counts of set and unset bits.
- Output the result to the output file `output2.txt`.


## Complexity Analysis

- **Time Complexity:** The algorithm iterates through each integer and each bit position once, resulting in a time complexity of O(n).
- **Space Complexity:** The space complexity is O(1) as the algorithm uses only a constant amount of extra space.