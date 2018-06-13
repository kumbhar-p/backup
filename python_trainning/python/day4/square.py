class square :
	def __init__(self, x) :
		self.x = x
		
	def area (self):
		return self.x * self.x
	def perimeter (self) :
		return 4 * self.x 
myshape = square(10)
print myshape.area()
print myshape.perimeter()
