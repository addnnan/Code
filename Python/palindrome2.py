word = input("Enter a number:")
wrd = ' '.join(word)
result=wrd.split()
x =[]
n = 0
l = len(result)
for i in range(l-1,-1,-1):
      x.insert(n, result[i])
      n+=1
now = "".join(x)
if now == word:
    print("Palindrome")
else:
    print("Not Palindrome")
