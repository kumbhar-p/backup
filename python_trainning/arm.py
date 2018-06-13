num = 153
x = num
res = 0
while x:
    y = x % 10
    res += y*y*y
    x = x / 10
if num == res:
    print "arm"
