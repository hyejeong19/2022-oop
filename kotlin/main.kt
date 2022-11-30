open class Worker(_name: String, _age: Int, _workerNum:Int) {
	var name : String = _name
	var age: Int = _age
	var workerNum: Int = _workerNum
}
	
open class Owner(_name: String, _age: Int) {
	var name : String = _name
	var age: Int = _age
	companion object { var m_money: Int = 1000000 }
   
    fun give_salary() { 
		println("$name give salary to worker")
        m_money-=100000
	}
    fun plus(A:Int) {
        m_money+=A
                    }
    fun showinfo() {
        println("$name has " + m_money)
    }

}

class Cook(_name: String, _age: Int, _workerNum:Int) : Worker(_name, _age, _workerNum) {
	
    fun cook() {
			println("$name cooking")
	}
}

class Server(_name: String, _age: Int, _workerNum:Int) : Worker(_name, _age, _workerNum) { 
    fun receive_order () { 
        println("$name make cook to cook")
	}
    
    fun serving() {
        println("$name serving to customer")
    }

    fun receive_payment() {
        println("$name receive payment from customer")
    }

    fun give_payment() {
        println("$name give payment to owner")
    }
}
	
class Customer(_name: String, _age: Int, _food:String)  {
	var name : String = _name
	var age: Int = _age
    var food : String = _food
	fun order() { 
		println("$name order")
	}
    fun pay() {
		println("$name pay")
        val split = this.food.split(',')
        for (i in split) {
            var a = Menu().returnprice(i)
            Owner(name,age).plus(a)
        }
            

	}
}



class Menu() {
    val menumap : Map<String,Int> = mapOf("jeongsik" to 5000,"teuksik" to 7000,"cider" to 2000,"cock" to 2000)
    val menuname = listOf<String>("jeongsik","teuksik","cider","cock")
    val menuprice = listOf<Int>(5000,7000,2000,2000)
    fun returnprice(name : String): Int {
        return menuprice[menuname.indexOf(name)].toInt()
        
    }
    companion object {
    val menuname = listOf<String>("jeongsik","teuksik","cider","cock")
    val menuprice = listOf<Int>(5000,7000,2000,2000)
    fun returnprice(name : String): Int {
        return menuprice[menuname.indexOf(name)].toInt()
        
    } }
    
}

fun main() {
  
    val king = Owner("주인", 40)
    val cook = Cook("요리사",20,1234)
    val serve = Server("서빙인",20,1234)
    val cus1 = Customer("손님1",30,"jeongsik,cider")
    val cus2N3 = Customer("손님2,3" , 30, "teuksik,teuksik,cock,cock")
    

    cus1.order()
    serve.receive_order()
    cook.cook()
    serve.serving()
    cus1.pay()
    serve.give_payment()
    cus2N3.order()
    serve.receive_order()
    cook.cook()
    serve.serving()
    cus2N3.pay()
    serve.give_payment()
    king.give_salary()
    king.showinfo()
    
}