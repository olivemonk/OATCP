# Patching Array

## Approach

The problem is to find the minimum number of patches required to make the array containing positive integers from 1 to n inclusive. This can be efficiently solved using a greedy algorithm.

## Steps

1. **Define function `fx`**:
   - Parameters: vector `nums` containing integers and an integer `n`.
2. Initialize variables `mx` and `ans` to 0.
3. Iterate through each element `num` in the `nums` vector:
   - While `num` is greater than `(mx + 1)`, increment `ans`, and update `mx` to `2 * mx + 1`.
     - If `mx` becomes greater than or equal to `n`, return `ans`.
   - Update `mx` by adding `num`.
     - If `mx` becomes greater than or equal to `n`, return `ans`.
4. If `mx` is still less than `n`, increment `ans` until `mx` becomes greater than or equal to `n`.
5. Return `ans` as the minimum number of patches required.

## Implementation Details

- Read the input vector `nums` and the integer `n` from the input file `sample_input1.txt`.
- Call the function `fx` to find the minimum number of patches required.
- Output the result to the output file `sample_output1.txt`.


## Complexity Analysis

- **Time Complexity:** The algorithm iterates through each element of the input vector once, resulting in a time complexity of O(n), where n is the size of the input vector.
- **Space Complexity:** The space complexity is O(1) as the algorithm uses only a constant amount of extra space.