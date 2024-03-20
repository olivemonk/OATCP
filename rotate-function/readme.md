# Rotate Function

## Approach

The rotate function aims to find the maximum value of the function F after performing rotations on an array. This function, denoted as F, is defined as follows:
- F(0) = (a[0] * 0) + (a[1] * 1) + (a[2] * 2) + ... + (a[n-1] * (n-1))
- F(1) = (a[n-1] * 0) + (a[0] * 1) + (a[1] * 2) + ... + (a[n-2] * (n-1))
- F(2) = (a[n-2] * 0) + (a[n-1] * 1) + (a[0] * 2) + ... + (a[n-3] * (n-1))
- ...
- F(n-1) = (a[1] * 0) + (a[2] * 1) + (a[3] * 2) + ... + (a[0] * (n-1))

## Steps

1. **Read Input:**
   - Read the size of the array 'n'.
   - Read the elements of the array 'a'.

2. **Compute Rotate Function:**
   - Compute the initial value of F(0).
   - Compute the value of F(i) for each rotation 'i' from 1 to 'n-1'.

3. **Find Maximum Value:**
   - Keep track of the maximum value of F encountered during rotations.

4. **Output:**
   - Output the maximum value of F.

## Complexity Analysis

- **Time Complexity:** 
  - Computing the initial value of F(0) takes O(n) time.
  - Computing each value of F(i) for rotations from 1 to n-1 takes O(n^2) time in total.
  - Thus, the overall time complexity is O(n^2).
  
- **Space Complexity:**
  - The space complexity is O(1) since the algorithm uses a constant amount of extra space.
