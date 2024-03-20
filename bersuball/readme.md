# Dynamic Programming Solution for Bersu Ball Problem

## Approach

The Bersu Ball problem can be efficiently solved using dynamic programming (DP). This approach involves constructing a table to store the length of the longest subsequence ending at each index `(i, j)` of the two sequences. By iteratively updating this table, we can find the longest subsequence with an absolute difference of at most 1.

## Steps

1. **Initialization**
   - Create a DP table `dp` of size `(n + 1) x (m + 1)` to store the length of the longest subsequence ending at each index `(i, j)`.
   - Initialize all cells of the DP table to -1, indicating that the length at each index is not yet computed.

2. **Recursive Function**
   - Define a recursive function `fn(i, j)` to compute the length of the longest subsequence ending at index `(i, j)`.
   - Within this function:
     - Check base cases: if either `i` exceeds the size of the first sequence or `j` exceeds the size of the second sequence, return 0.
     - If the length at index `(i, j)` is already computed (not equal to -1), return the stored value.
     - Consider three cases:
       - If the absolute difference between the elements at indices `i` and `j` is at most 1, recursively call `fn(i+1, j+1)` and add 1 to the result.
       - Skip the current element in the first sequence and recursively call `fn(i+1, j)`.
       - Skip the current element in the second sequence and recursively call `fn(i, j+1)`.
     - Update the DP table at index `(i, j)` with the maximum of these three cases.

3. **Result**
   - The result is obtained by calling `fn(0, 0)`, which computes the length of the longest subsequence.

## Complexity Analysis

- **Time Complexity**: O(nm), where `n` and `m` are the sizes of the two sequences, as we iterate over all indices of the DP table.
- **Space Complexity**: O(nm), as we use a DP table of size `(n + 1) x (m + 1)`.

This dynamic programming approach efficiently computes the length of the longest subsequence with an absolute difference of at most 1 between the given sequences.
