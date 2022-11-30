using System;
class Server : Worker {
	public Server(string _name, int _age, int _workerNum): base(_name,_age,_workerNum) {}
	public void receive_order() {
		System.Console.WriteLine(this.name + "  make cook to cook");
	}
	public void serving() {
		System.Console.WriteLine(this.name + "  serving to customer");
    }
    public void receive_payment() {
		System.Console.WriteLine(this.name + "  receive payment from customer");
	}
	
    public void give_payment() {
		System.Console.WriteLine(this.name + "  give payment to owner");

	}

}

