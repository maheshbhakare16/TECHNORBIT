package com.infosys.ippb;
class Main
{
    public static void main(String[] args)
    {
        Account Mahesh = new Account("101","Mahesh","Morvis",23000.00f);
        Transaction t1 = new Transaction("P12459823");
        t1.diposit(Mahesh,7000.00f);
        System.out.println("Account Blanace: "+Mahesh.getBalance());
        Transaction t2 = new Transaction("P12459824");
        t2.withDraw(Mahesh,40000.00f);
        System.out.println("Account Blanace: "+Mahesh.getBalance());
        Transaction t3 = new Transaction("P12459825");
        t3.withDraw(Mahesh, 20000.00f);
        System.out.println("Account Blanace: "+Mahesh.getBalance());
        Transaction t4 = new Transaction("P12459826");
        t4.diposit(Mahesh,-7000.00f);
        System.out.println("Account Blanace: "+Mahesh.getBalance());
    }
}
