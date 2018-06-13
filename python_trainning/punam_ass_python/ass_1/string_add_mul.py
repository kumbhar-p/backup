str1 = raw_input("enter the 1st string :")
str2 = raw_input("enter the 2nd string :")
print "enter op : 1. add string 2. mul string "
op = input()
if op == 1:
    str1 += str2
    str1 = str1.replace(" ", "")
    print str1
else :
    if op == 2:
        str1 *= 3
        str1 = str1.replace(" ", "")
        print str1
    else :
        print "wrong option"
