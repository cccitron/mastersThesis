#import numpy

print("Template\n")
ndx = 0
for i in range(2):
    for j in range(16):
        print(j)
        for k in range(9):
            for m in range(9):
                print(m+i+(25*k), end=" ")
            ndx += 1
            print("")
        print("")
    print("\n")

print("\nSearch\n")
ndx = 0
for i in range(2):
    for j in range(16):
        print(j)
        for k in range(9):
            for m in range(9):
                print(m+i+j+(25*k), end=" ")
            ndx += 1
            print("")
        print("")
    print("\n")
