def greeting_func(title,name,message):
	print """{}.{}\n{}""".format(title,name,message)


title=(raw_input("Enter Title [mr/mrs/shri/dr/ms]:"))
name=(raw_input("Enter Name:"))
message=(raw_input("Enter Message:"))

greeting_func(title=title,message=message,name=name)

