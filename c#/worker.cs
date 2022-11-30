using System;
public class Worker{
		protected string name;
		protected int age;
		protected int workerNum;
	
		public Worker(string _name, int _age, int _workerNum) {
			name = _name;
			age = _age;
			workerNum = _workerNum;
		}

        ~Worker() {
            System.Console.WriteLine("Instance removed.");
        }
}