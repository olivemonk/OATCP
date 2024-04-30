# Minimum Input

## Approach

The problem is to find the minimum possible number by removing k digits from a given number string. This can be achieved efficiently using a stack-based approach.

## Steps

1. **Define function `fx`**:
   - Parameters: string `s` representing the number, integer `k` for the number of digits to remove.
2. **Initialize stack `st`** to store digits.
3. **Iterate through each digit** of input string:
   - Compare current digit with top of stack:
     - If current digit is smaller than top of stack and `k > 0`, remove digits until stack is empty or top of stack <= current digit.
     - If stack is empty and current digit is '0', continue to next digit.
     - Push current digit onto stack.
4. **If `k > 0` after processing digits**, pop digits from stack until `k` becomes 0.
5. **If stack is empty**, return "0".
6. **Construct minimum number string** by popping digits from stack and appending to result string.
7. **Return result string**.

## Implementation Details

- Read input string `s` and integer `k` from `input.txt`.
- Call function `fn` to find minimum number after removing `k` digits.
- Output result string to `output.txt`.

## Complexity Analysis

- **Time Complexity:** The algorithm iterates through each digit of the input string once, resulting in a time complexity of O(n), where n is the length of the input string.
- **Space Complexity:** The space complexity is O(n) due to the stack used to store digits from the input string.