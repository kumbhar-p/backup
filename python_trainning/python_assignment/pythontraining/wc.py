#Implement word count command, gives number of lines,number of words,number of characters in a file

import sys
import os

if len(sys.argv)!=2:
	print "Usage:filename.py source"
else:
	if os.path.isfile(sys.argv[1]):
		f1=open(sys.argv[1],"r")
		numlines=f1.readlines()
		print "number of lines:",len(numlines)
		f1.seek(0)
		numwords=f1.read()
		numwords=numwords.split()
		print "number of words:",len(numwords)
		f1.seek(0)
		numchar=f1.read()
		print "number of characters:",len(numchar)
		f1.seek(0)
		
	else:
		print "File does not exists"	
