n = int(input("Enter a number: "))

binary = bin(n)[2:]
print("Binary representation:", binary)

count_1 = binary.count('1')
count_0 = binary.count('0')

# Find maximum consecutive 1s
max_ones = 0
current_ones = 0

for digit in binary:
    if digit == '1':
        current_ones += 1
        if current_ones > max_ones:
            max_ones = current_ones
    else:
        current_ones = 0

print("Number of 1s:", count_1)
print("Number of 0s:", count_0)
print("Number of consecutive 1s:", max_ones)
