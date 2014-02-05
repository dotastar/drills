using System;

class Person {}

class Program {
	public static void Main()
	{
		Console.WriteLine("**** Fun with System.Object ****\n");
		Person p1 = new Person();
		Console.WriteLine("ToString: {0}", p1.ToString());
		Console.WriteLine("ToString: {0}", p1.GetHashCode());
		Console.WriteLine("ToString: {0}", p1.GetType());
	}
}
