def pop_():
    if arr == []:
        return 0
    else :
        return arr.pop()

def push_(num):
    arr.append(num)
    return 

def display():
    for i in arr:
        print i,
    return

arr = []
ch = 'y'
print "enter no. of elements"
ele = input()
print "enter the elements"
for i in range (0, ele):
    arr.append(input())
while ch == 'y' :
    print "Enter the op :\n1. Push 2. pop 3. display 4. quit"
    op = input()
    if op == 1:
        print "enter the ele to push"
        push_(input())
    elif op == 2:
        num = pop_()
        if num == 0:
            print "deleted ele is :",num
        else :
            print "stack is empty"
    elif op == 3:
        display()
    else:
        print "exited"
        break
    print "do u want to continue y/n"
    ch = raw_input()
    


