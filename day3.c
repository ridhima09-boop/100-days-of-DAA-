def longest_increasing_streak(temperatures):
    if not temperatures:
        return 0

    max_streak = 1
    current_streak = 1

    for i in range(1, len(temperatures)):
        if temperatures[i] > temperatures[i - 1]:
            current_streak += 1
            max_streak = max(max_streak, current_streak)
        else:
            current_streak = 1

    return max_streak


# Example Usage
temperatures = [10, 12, 15, 14, 16, 18, 20]
print(longest_increasing_streak(temperatures))  # Output: 4
