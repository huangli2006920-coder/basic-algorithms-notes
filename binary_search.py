"""Simple binary search script structure."""


def binary_search(sorted_numbers, target):
    """Return int index of target in a sorted list of comparable values, else -1."""
    # Start with pointers at both ends of the sorted list.
    left = 0
    right = len(sorted_numbers) - 1

    # Keep searching while there is a valid search range.
    while left <= right:
        # Check the middle element of the current range.
        mid = left + (right - left) // 2

        if sorted_numbers[mid] == target:
            # Target found.
            return mid
        if sorted_numbers[mid] < target:
            # Target is in the right half.
            left = mid + 1
        else:
            # Target is in the left half.
            right = mid - 1

    # Target was not found.
    return -1


if __name__ == "__main__":
    # Example usage.
    data = [1, 3, 5, 7, 9, 11]
    item = 7
    result = binary_search(data, item)

    if result != -1:
        print(f"Found {item} at index {result}.")
    else:
        print(f"{item} was not found.")
