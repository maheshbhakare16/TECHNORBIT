package com.wipro.ippb.database_connection;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.util.Scanner;
import java.sql.ResultSet;
class PreparedStmt
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Connection con=null;
        try
        {
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","mahesh12@");
        
            if(con == null)
            {
                System.out.println("Connection not Established");
            }
            else
            {
                ResultSet rs = null;
                int roll;
                roll = sc.nextInt();
                String query = "select roll, name from studinfo where roll = ?";
                PreparedStatement ps = con.prepareStatement(query);
                ps.setInt(1,roll);
                rs = ps.executeQuery();
                if(rs.next() != false)
                {
                    System.out.println(rs.getInt(1)+" | "+rs.getString(2));
                }
                else
                {
                    System.out.println("No data Found...");
                }
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally
        {
            try
            {
                con.close();
            }
            catch(NullPointerException ne)
            {
                System.out.println(ne);
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
        
    }
}
