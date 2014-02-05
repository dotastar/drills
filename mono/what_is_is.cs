using System;

class Person {}

class Program {
	public static void Main()
	{
		Person obj = null;
		if (obj is Person) {
			Console.WriteLine("obj(null) is-a Person");
		}
		else {
			Console.WriteLine("obj(null) is-not-a Person");
		}
	}
}
