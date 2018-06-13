class D:
	def __init__(self,start):
		self.data=start
	def __sub__(self,other):
		return D(self.data-other)
	def displaydata(self):
		return self.data

X=D(7)
Y=X-4
print Y
print Y.displaydata()
	
