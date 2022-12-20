word = input("Enter a word to check if it's palindrome:-")
if word == word[::-1]:
    print("palindrome")
else:
    print("not palindrome")

