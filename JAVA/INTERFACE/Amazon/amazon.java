class Bank
{

    void select_bank(Amazon a)
    {
        System.out.println("Selected Bank is: "+a.getClass().getSimpleName());
        a.paymentStatus();
        System.out.println("*****************************************************************************");
    }

}



interface Amazon
{
    void paymentStatus();
}

class SBI implements Amazon
{

    public void paymentStatus()
    {
        System.out.println("Payment Successful....");
    }

}


class HDFC implements Amazon
{
    public void paymentStatus()
    {
        System.out.println("Payment Successful....");
    }

}

class Axis implements Amazon
{
    public void paymentStatus()
    {
        System.out.println("Payment Successful....");
    }

}


class Customer
{

    public static void main(String args[])
    {
        Bank b = new Bank();
        b.select_bank(new SBI());
        b.select_bank(new HDFC());
        b.select_bank(new Axis());
    }

}
