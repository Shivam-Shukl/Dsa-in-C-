# Define a function to convert decimal to binary
def decimal_to_binary(decimal):
  # Initialize an empty string to store the binary digits
  binary = ""
  # Loop until the decimal number becomes zero
  while decimal > 0:
    # Get the remainder of dividing the decimal by 2
    remainder = decimal % 2
    # Convert the remainder to a string and prepend it to the binary string
    binary = str(remainder) + binary
    # Divide the decimal by 2 and update it
    decimal = decimal // 2
  # Return the binary string
  return binary

# Ask the user to enter a decimal number
decimal = int(input("Enter a decimal number: "))

# Call the function with the user input and print the result
binary = decimal_to_binary(decimal)
print(f"The binary representation of {decimal} is {binary}.")
