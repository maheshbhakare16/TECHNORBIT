interface Demo
{
    void fun();
    void gun();
}
class Test implements Demo
{
	public void fun()
	{
	System.out.println("In Fun");
	}
	public void gun()
	{
	System.out.println("In Gun");
	}
	public static void main(String args[])
	{
		Test t = new Test();
		t.gun();
		t.fun();
	}
}    
