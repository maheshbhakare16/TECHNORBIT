class Animal
{
    static void eat()
    {
    System.out.println("Veg & NonVelg");
    }
}
class Lion extends Animal
{
    static void eat()
    {
        System.out.println("NonVeg");
    }
}
class Main
{
    public static void main(String args[])
    {
        Animal a = new Animal();
        Animal l = new Lion();
        Lion li= new Lion();
        a.eat();
        l.eat();
        li.eat();
        
    }
}
