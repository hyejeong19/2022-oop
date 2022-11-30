using System;
public class Owner{
	protected string name;
	protected int age;
    public static int m_money = 1000000;
    public Owner(string _name, int _age) {
	    name = _name;
	    age = _age;
    }
    ~Owner() {
        System.Console.WriteLine("Instance removed.");
    }
    public void give_salary() {
        System.Console.WriteLine(name+" give salary to worker");
        Owner.m_money-=100000;
    }
    public static void plus(int A) {
        Owner.m_money+=A;
    }
    public void showinfo() {
        System.Console.WriteLine(name+" has "+ m_money.ToString());
    }
}
