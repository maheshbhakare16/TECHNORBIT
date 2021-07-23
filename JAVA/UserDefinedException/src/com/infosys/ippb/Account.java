package com.infosys.ippb;
class Account
{
    String accNo;
    String accHolderName;
    String Address;
    float AccBalance;
    Account(String accNo,String accHolderName,String Address,float AccBalance)
    {
        this.accNo = accNo;
        this.accHolderName = accHolderName;
        this.Address = Address;
        this.AccBalance = AccBalance;
    }
    void setBalance(float balance)
    {
        this.AccBalance = balance;
    }
    float getBalance()
    {
        return this.AccBalance;
    }
}
