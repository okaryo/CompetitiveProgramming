A = input()
if A[0] == "A":
    B = A[2: -1]
    C = B.count("C")
    if C == 1:
        D = A.replace("A", "").replace("C", "")
        E = D.islower()
        if E == 1:
            print("AC")
        else:
            print("WA")
    else:
        print("WA")
else:
    print("WA")
    