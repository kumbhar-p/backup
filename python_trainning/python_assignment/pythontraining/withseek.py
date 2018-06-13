import sys
import os

if len(sys.argv!=3:
	print "Usage:filename.py sourcefile destfile"
else:
	if os.path.exists(sys.argv[1]):
		f1=open(sys.argv[1],"r")
		f1.read()
