interface Sim
{
    void call_rate();
    void sms_rate();
}

class VI implements Sim
{
    public void call_rate()
    {
        System.out.println("VI call rate - 0.20 Rs/Minute");
    }
    public void sms_rate()
    {
    System.out.println("VI sms Rate - Rs_ 1/sms");
    }
}

class Jio implements Sim 
{
    public void call_rate()
    {
        System.out.println("Jio call rate - 0.35 Rs/Minute");
    }
    public void sms_rate()
    {
    System.out.println("Jio sms Rate - Rs_ 1/sms");
    }
}


class Airtel implements Sim
{
    public void call_rate()
    {
        System.out.println("Airtel call rate - 0.25 Rs/Minute");
    }

    public void sms_rate()
    {
        System.out.println("Airtel sms Rate - Rs_ 1/sms");
    }
}

class Mobile
{
    void insert_sim(Sim s)
    {
        System.out.println("Inserted Sim is: "+s.getClass().getSimpleName());
        s.call_rate();
        s.sms_rate();
        System.out.println("************************************************************************");
    }
}

class User
{
    public static void main(String args[])
    {
        Mobile MI_A_3 = new Mobile();
        MI_A_3.insert_sim(new Jio());
        MI_A_3.insert_sim(new VI());
        MI_A_3.insert_sim(new Airtel());
    }
}
