#Program to clear screen

import sys
import os

if sys.platform=="linux2": #checks whether platform is linux
	os.system("clear")
elif sys.platform=="win32": #checks whether platform is windows
	os.system("cls")
