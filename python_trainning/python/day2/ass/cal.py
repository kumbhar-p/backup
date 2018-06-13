ch = 'y'
print "1. simple calc 2. sci calc 3. exit"
op = input()
while ch == 'y' or 'Y':
    if op == 1:
        print "enter 2 no."
        num1 = input()
        num2 = input()
        print "1. add 2. sub 3. mul 4. div 5. exit"
        op1 = input()
        if op1 == 1 :
            s = num1 + num2	
            print s	
        elif op1 == 2 :	
            s = num1 - num2	
            print s
        elif op1 == 3 :	
            m = num1 * num2	
            print m
        elif op1 == 4 :
            m = num1 / num2	
            print m
        elif op1 == 5 :
    	    print "exited from simple cal"
            break
        else :
            print "wrong option"
            continue
        print "do u want to continue y/n"
        ch = raw_input()
        break
    elif op == 2:
        print "enter the num"
        num = input()
        print "1. sin 2. cos 3. power of 4. square root 5. exit"    
        op2 = input()
        import math
        if op2 == 1:
            res = math.sin(num)
            print res
        elif op2 == 2:
            res = math.cos(num)
            print res
        elif op2 == 3:
            print "number power of :"
            res = math.pow(num, input())
            print res
        elif op2 == 4:
            print math.sqrt(num)
        else :
            print "exited from sci cal"
            break
        print "do u want to continue y/n"
        ch = raw_input()
        break
    elif op == 3:
        print "exited"
        break
    else :
        print "wrong option"
        break
        
