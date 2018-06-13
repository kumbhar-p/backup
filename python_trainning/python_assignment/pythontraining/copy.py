#Implement copy command

import sys

if len(sys.argv)!=3:
	print "Usage:filename.py sourcefile destfile"
else:
	source=open(sys.argv[1],"r")
	dest=open(sys.argv[2],"w")
	dest.write(source.read())
	source.close()
	dest.close()
