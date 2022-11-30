class Worker:
	def __init__(self,name,age,workerNum):
		self.name = name
		self.age = age
		self.workerNum = workerNum
	def __del__(self): 
		print('Instance destructed')

class Owner:
	money = 1000000
	def __init__(self,name,age):
		self.name = name
		self.age = age
	def __del__(self):
		print('Instance destructed')
	def give_salary(self):
		print(self.name + ' give salary to worker')
		Owner.money-=100000
	def showinfo(self):
		print(self.name+" has "+str(Owner.money))
	@staticmethod
	def plus(A):
		Owner.money+=A


	

class Cook(Worker):
	def __init__(self,name,age,workerNum):
		super().__init__(name,age,workerNum)
	def cook(self):
		print(cook.name+'cooking ')
		Server.serving(self)

class Server(Worker):
	def __init__(self,name,age,workerNum):
		super().__init__(name,age,workerNum)
	def receive_order(self):
		print(serve.name+' make cook to cook')
		Cook.cook(self)
	def serving(self):
		print(serve.name+'server serving to customer')
	def receive_payment(self):
		print(self.name + ' receive payment from customer')
		
	def give_payment(self):
		print(self.name + ' give payment to owner')

class Customer:
	def __init__(self,name,age,food):
		self.name = name
		self.age = age
		self.food = food
	def order(self):
		print(self.name+ ' order ')
		Server.receive_order(self)
		

	def pay(self):
		print(self.name + ' pay')
		Server.give_payment(self)
		split = self.food.split(",")
		for x in split:
			Owner.plus(Menu.returnprice(x))
		

class Menu:
	dic1 = {"jeongsik":5000,"teuksik":7000,"cider":2000,"cock":2000}

	def returnprice(name):
		return Menu.dic1[name]

	


king = Owner("주인", 40)
cook = Cook("요리사",20,1234)
serve = Server("서빙인",20,1234)
cus1 = Customer("손님1",30,"jeongsik,cider")
cus2N3 = Customer("손님2,3" , 30, "teuksik,teuksik,cock,cock")

cus1.order()
cus1.pay()
serve.give_payment()
cus2N3.order()
cus2N3.pay()
serve.give_payment()
king.give_salary()
king.showinfo()


