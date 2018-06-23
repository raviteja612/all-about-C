class Stack:
	def __init__(self):
		self.items = []
	
	def push(self, item):
		return self.items.append(item)
	
	def pop(self):
		return self.items.pop()
	
	def displayItems(self):
		ctr = -1
		for itm in self.items:
			print (self.items[ctr])
			ctr -=1



stak = Stack()
stak.push(3)
stak.push(6)
stak.push(9)
stak.push(12)
stak.displayItems()
stak.pop()
stak.pop()
stak.displayItems()
	
	