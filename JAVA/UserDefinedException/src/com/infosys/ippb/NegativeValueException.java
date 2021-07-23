package com.infosys.ippb;
class NegativeValueException extends Exception
{
    NegativeValueException()
    {
        super("Your Entered Value is Negative");
    }
    NegativeValueException(String s)
    {
        super(s);
    }
}
