package com.infosys.ippb;
class InsufficientBalanceException extends Exception
{
    InsufficientBalanceException()
    {
        super("Your Withdraw Ammount is to more, Please enter Ammount which is less than or equals to Account Balance");
    }
    InsufficientBalanceException(String s)
    {
        super(s);
    }
}
