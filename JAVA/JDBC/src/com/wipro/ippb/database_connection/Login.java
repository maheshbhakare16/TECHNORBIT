package com.wipro.ippb.database_connection;
import java.sql.SQLException;
import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.Statement;
import java.util.Scanner;
import java.sql.ResultSet;
import java.io.Console;
class Login
{
	public static void main(String args[])
	{
        Console c = System.console();
        Scanner sc = new Scanner(System.in);
 		Connection con = null;
 		try
 		{
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/LoginAuthentication","root","mahesh12@");
            if(con == null)
            {
                System.out.println("Not Established");
            }
            else
            {
                int count;
                System.out.print("Enter Username: ");
                String uname = sc.next();
                System.out.print("Enter Password: ");
                String pass = sc.next();
                String query = "select count(uname) as count from Login where uname = '"+uname+"' and password = '"+pass+"'";
                Statement st = con.createStatement();
                ResultSet rs = st.executeQuery(query);
                rs.next();
                count = rs.getInt("count");
                if(count == 0)
                {
                    System.out.println("Invalid Details....");
                }   
                else
                {
                    System.out.println("Authinticate Successfully....");
                }
            }
 		}
 		catch(ArithmeticException ae)
 		{
            System.out.println(ae);
 		}
 		catch(SQLException se)
 		{
            System.out.println(se);
 		}
 		finally
 		{
            try
            {
                con.close();
            }
            catch(NullPointerException np)
            {
                System.out.println(np);
            }
            catch(SQLException se)
            {
                System.out.println(se);
            }
 		}
 		
    }
}
