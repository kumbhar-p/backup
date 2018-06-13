print "enter the starting num"
start = input()
print "enter the ending num"
end = input()
for num in range(start, end):
    res = 0
    temp = num
    while temp:
        x = temp % 10
        res += x*x*x
        temp = temp / 10
    
    if num == res:
        print "armstrong number:",num
    
