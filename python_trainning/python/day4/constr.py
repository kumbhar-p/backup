class shape :
	def __init__(self, x, y) :
		self.x = x
		self.y = y
		
	def area (self):
		return self.x * self.y
	def perimeter (self) :
		return 2 * self.x + 2 * self.y
myshape = shape(10,20)
print myshape.area()
print myshape.perimeter()
