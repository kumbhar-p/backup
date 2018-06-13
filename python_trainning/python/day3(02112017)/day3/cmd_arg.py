import sys
s = 0
print sys.argv[0]
l = len(sys.argv)
print "length : ", l
#x = int(sys.argv[1]) + int(sys.argv[2])
for i in range(1,len(sys.argv)):
	s += int(sys.argv[i])
print s
sys.exit(1)

