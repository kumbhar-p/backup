fil_op = open("data.txt", "r")
#fil = raw_input()
new_fil = open("fil.txt", "w+")
new_fil.write(fil_op.read())
