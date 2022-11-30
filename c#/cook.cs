using System;
class Cook : Worker {
	public Cook(string _name, int _age, int _workerNum) : base(_name,_age,_workerNum){}
	public void cook() {
			System.Console.WriteLine(this.name+"  cooking");
		}
	}
