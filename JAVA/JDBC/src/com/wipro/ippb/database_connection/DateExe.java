package com.wipro.ippb.database_connection;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.util.Scanner;
import java.sql.ResultSet;
import java.text.SimpleDateFormat;
class DateExe
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
                String query = "insert into studentinformation values (?,?,?,?)";
                PreparedStatement ps = con.prepareStatement(query);
                ResultSet rs = null;
                int count;
                String name,dob,address;
                int roll;
                System.out.print("Enter Roll No.: ");
                roll = sc.nextInt();
                System.out.print("Enter Name: ");
                name = sc.next();
                System.out.print("Enter Date Of Birth: ");
                dob = sc.next();
                System.out.print("Enter Address: ");
                address = sc.next();
                
                SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-yyyy");
                java.util.Date ud = sdf.parse(dob);
                java.sql.Date sd = new java.sql.Date(ud.getTime());
                
                ps.setInt(1,roll);
                ps.setString(2,name);
                ps.setDate(3,sd);
                ps.setString(4,address);
                count = ps.executeUpdate();
                if(count != 0)
                {
                    System.out.println(count+" rows Affected...");
                }
                else
                {
                    System.out.println("Error while inserting....");
                }
                
                query = "select * from studentinformation where roll = ?";
                PreparedStatement ps1 = con.prepareStatement(query);
                System.out.print("Enter Roll No.: ");
                roll = sc.nextInt();
                ps1.setInt(1,roll);
                rs = ps1.executeQuery();
                if(rs.next()!=false)
                {
                    System.out.println("Roll: "+rs.getInt(1)+" Name: "+rs.getString(2)+" DOB: "+rs.getDate(3)+" Address: "+rs.getString(4));
                }
                else
                {
                    System.out.println("No Data Feached.......");
                }
            }
        }
        catch(Exception e)
        {
            System.out.println(e.getLocalizedMessage() );
        }
        finally
        {
            try
            {
                con.close();
            }
            catch(NullPointerException ne)
            {
                ne.printStackTrace();
            }
            catch(SQLException e)
            {
                e.printStackTrace();
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
        
    }
}
