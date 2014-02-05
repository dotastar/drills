using System;

class Person {}
class Program {
	public static void Main()
	{
		string s1 = "abc";
		string s2 = "abc";
		Person p1 = new Person();
		Person p2 = new Person();
		Console.WriteLine("s1.GetHashCode {0}", s1.GetHashCode());
		Console.WriteLine("s2.GetHashCode {0}", s2.GetHashCode());
		Console.WriteLine("p1.GetHashCode {0}", p1.GetHashCode());
		Console.WriteLine("p2.GetHashCode {0}", p2.GetHashCode());
	}
}
