a=int(input("Type the 1st number"))
b=int(input("Type the 2nd number"))
print("Addition '+'")
print("Subtraction '-'")
print("Product '*'")
print("Division '/'")
choice=input("Choose an operation : ")
while ((choice != '+') and ( choice != '-') and ( choice != '*') and ( choice != '/')):
    print("Invalid Input")
    choice=input("Choose an operation : ")
if ( choice == '+'):
    print("The result = ", a+b)
elif ( choice == '-'):
    print("The result = ", a-b)
elif ( choice == '*'):
    print("The result = ", a*b)
else :
    print("The result = ", a/b)
    


