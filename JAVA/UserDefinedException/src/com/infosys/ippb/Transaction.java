package com.infosys.ippb;
class Transaction
{
    String tnxID;
    Transaction(String tnxID)
    {
        this.tnxID = tnxID;
    }
    void withDraw(Account ac , float withDrawAmmount)
    {
        try
        {
            if(ac.AccBalance >= withDrawAmmount)
            {
            ac.AccBalance = ac.AccBalance - withDrawAmmount;
            }
            else
            {
                throw new InsufficientBalanceException();
            }
        }
        catch(InsufficientBalanceException ibe)
        {
            System.out.println(ibe);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    void diposit(Account ac, float dipositAmmount)
    {
        try
        {
    
            if(dipositAmmount >=0)
            {
                ac.AccBalance = ac.AccBalance + dipositAmmount;
            }
            else
            {
                throw new NegativeValueException("Diposit Ammount is less than zero, Ammount must be greater than or equals to zero");
            }
        }
        catch(NegativeValueException nve)
        {
            nve.printStackTrace();
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
}
