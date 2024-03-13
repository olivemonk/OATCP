## Dynamic Programming Solution

### Approach
The dynamic programming approach involves creating a table to store the number of ways to obtain each sum from 0 to the target sum, n. By building up the table incrementally, we can leverage previously calculated values and avoid redundant calculations.

### Steps

1. **Initialization**
  - Create a table `dp` of size `(n + 1)` to store the number of ways to get each sum from 0 to `n`.
  - Initialize `dp[0]` to 1 (there is one way to get a sum of 0 - by not throwing any dice).

2. **Iterate through possible sums**
  - Iterate over all possible sums `i` from 1 to `n`.
  - For each sum `i`, iterate over all possible dice throws `j` from 1 to 6.
  - Update the table:
    - If the remaining sum `(i - j)` is non-negative, the number of ways to get the sum `i` is the sum of the number of ways to get the remaining sum `(i - j)` and the number of ways to get the current dice throw `j` (which is always 1).
    - Update the table `dp[i]` with this value.

3. **Base Case**
  - The base case `dp[0] = 1` is handled during the initialization step.

4. **Result**
  - The final value in `dp[n]` represents the total number of ways to construct the target sum `n` using the given number of dice throws.

### Complexity Analysis

- **Time Complexity**: O(n × 6), where n is the target sum, and 6 represents the number of possible outcomes for a single dice throw.
- **Space Complexity**: O(n), where n is the target sum, as we need to store the number of ways for each possible sum from 0 to n.

This dynamic programming approach is efficient and avoids redundant calculations by storing and reusing previously computed results.