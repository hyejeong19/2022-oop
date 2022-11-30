using System;
public class Customer{
	protected string name;
	protected int age;
    public string food;
    public Customer(string _name, int _age,string _food) {
	    name = _name;
	    age = _age;
        food = _food;
    }

    ~Customer() {
        System.Console.WriteLine("Instance removed");
    }
    public void order() {
        System.Console.WriteLine(name+"  order");
        
    }
    public void pay() {
	    System.Console.WriteLine(name+"  pay");
        List<string> foodlist;
        foodlist = food.Split(',').ToList();
        for (int i=0; i < foodlist.Count; i++){
            var a = foodlist[i];
            Owner.plus(Menu.returnprice(a));
        }
    }
}
