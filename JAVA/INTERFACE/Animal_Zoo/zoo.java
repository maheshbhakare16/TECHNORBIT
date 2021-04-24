class Zoo
{
    void add_animal(Animal a)
    {
        System.out.println("Animal added in Zoo : "+a.getClass().getSimpleName());
        a.eat();
        System.out.println("*****************************************************************************");
    }
}

interface Animal
{
    void eat();
}

class Deer implements Animal
{
    public void eat()
    {
        System.out.println("HERBIVOROUS ANIMAL");
    }
}

class Dog implements Animal
{
    public void eat()
    {
        System.out.println("OMNIVOROUS ANIMAL");
    }
}

class Tiger implements Animal
{
    public void eat()
    {
        System.out.println("CARNIVOROUS ANIMAL");
    }
}

class ForestOfficer
{
    public static void main(String args[])
    {
        Zoo national_zoo=new Zoo();
        national_zoo.add_animal(new Tiger());
        national_zoo.add_animal(new Deer());
        national_zoo.add_animal(new Dog());
    }
}
