#Operations on file

import sys
import os

if len(sys.argv)!=2:
	print "Usage:filename.py file"
else:
	if os.path.isfile(sys.argv[1]):	
		f1 = open(sys.argv[1],"r")
		print f1.read()
		f1.close()
	else:
		print "File is not existing"

