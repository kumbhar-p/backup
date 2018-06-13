file_open = open("data.txt","r+")
print file_open.read()

#print file_open.tell()
print len(file_open.readlines())

file_open.write("once again welcome to my world\n")
file_open.seek(0,0)
print len(file_open.readlines())
#print file_open.read()
