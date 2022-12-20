file = open("text.txt" , "w")
for i in range(1,10):
    print(file.write("my name is adnan \n"))
file.close()
with open("text.txt", "r") as file:
    file.read()
    file.close()