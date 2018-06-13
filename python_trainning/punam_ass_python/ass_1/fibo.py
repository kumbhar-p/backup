print "enter starting num"
start = input()
print "enter ending num"
end = input()
x = 0
y = 1
print x,y,
for num in range(start, end):
    z = x + y
    print z,
    x = y
    y = z
    
