package com.wipro.ippb.database_connection;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Scanner;
import java.io.FileInputStream;
import java.io.InputStream;
import java.io.FileOutputStream;
import org.apache.commons.io.IOUtils;
class DatabaseImageInsert
{
    public static void main(String args[]) throws Exception
    {
//         Connection con = null;
         String query = "insert into studinfo values (?,?,?,?,?)";
        try(Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","mahesh12@");Scanner sc = new Scanner(System.in);PreparedStatement ps = con.prepareStatement(query))
        {
            
            
            if(con == null)
            {
                System.out.println("Not Established...");
            }
            else
            {
               
                
                System.out.print("Enter Roll No. of Student: ");
                int roll = sc.nextInt();
                System.out.print("Enter Name of Student: ");
                String name = sc.next();
                System.out.print("Enter Age of Student: ");
                int age = sc.nextInt();
                System.out.print("Enter Address of Student: ");
                String address = sc.next();
                System.out.print("Enter Path of Image of Student: ");
                String path = sc.next();
                try(FileInputStream fis = new FileInputStream(path))
                {
                ps.setInt(1,roll);
                ps.setString(2,name);
                ps.setInt(3,age);
                ps.setString(4,address);
                ps.setBinaryStream(5,fis);
                int count = 0;
                count = ps.executeUpdate();
                System.out.println(count+" rows Affected...");
                
                System.out.println("Retriving Data from Database : ");
                
                query = "select * from studinfo where roll = ?";
                PreparedStatement ps1 = con.prepareStatement(query);
                System.out.print("Enter Roll No. of Student: ");
                roll = sc.nextInt();
                ps1.setInt(1,roll);
                ResultSet rs = ps1.executeQuery();
                if(rs.next() != false)
                {
                    roll = rs.getInt(1);
                    name = rs.getString(2);
                    age = rs.getInt(3);
                    address = rs.getString(4);
                    InputStream is = rs.getBinaryStream(5);
                    FileOutputStream fos = new FileOutputStream("output.img");
                    IOUtils.copy(is,fos);
                    System.out.println(" | "+roll+" | "+name+" | "+age+" | "+address+" | ");
                }
                else
                {
                    System.out.println("No data Found.....");
                }
                }
                catch(Exception e)
                {
                    e.printStackTrace();
                }
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
