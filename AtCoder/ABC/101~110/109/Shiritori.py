a = int(input())
strings =[input() for i in range(a)]

b = 0
c = 1
#finish = strings[b][-1:]
#start = strings[c][0:1]

if len(strings) == len(set(strings)):
    while c <= a - 1:
        finish = strings[b][-1:]
        start = strings[c][0:1]
        if finish == start:
            b += 1
            c += 1
            if c == a:
                print("Yes")
        else:
            print("No")
            break
else:
    print("No")

"""
9
basic
c
cpp
php
python
nadesico
ocaml
lua
pssembly
最後の「lua」と「pssembly」がルールに合ってないけどYesになってしまう
"""