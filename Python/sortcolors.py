""" Write a Python program that prints out all colors from color_list_1 that are not present in color_list_2.

Test Data:
color_list_1 = set(["White", "Black", "Red"])
color_list_2 = set(["Red", "Green"])
Expected Output :
{'Black', 'White'}
"""

def colors(list1, list2):
  in1 = []
  in2 = []
  for i in list1:
    if i not in list2:
      in1.append(i)
  for j in list2:
    if j not in list1:
      in2.append(j)
  return in1 , in2
  
  
print(colors(["White", "Black", "Red"],["Red", "Green"]))