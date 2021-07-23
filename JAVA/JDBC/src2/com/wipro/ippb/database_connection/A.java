// ----------------   BINARY FILE INSERT IN DATABASE -----------------------

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
        Connection con = null;
        Scanner sc = new Scanner(System.in);
        try
        {
            
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","mahesh12@");
            if(con == null)
            {
                System.out.println("Not Established...");
            }
            else
            {
                String query = "insert into studinfo values (?,?,?,?,?)";
                PreparedStatement ps = con.prepareStatement(query);
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
                FileInputStream fis = new FileInputStream(path);
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
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}




// ----------------   CHARACTER FILE INSERT IN DATABASE -----------------------

package com.wipro.ippb.database_connection;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.io.InputStream;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.File;
import java.util.Scanner;
import java.io.FileOutputStream;
import org.apache.commons.io.IOUtils;
import java.io.Reader;

class DatabaseCFileInsert
{
    public static void main(String args[]) throws Exception
    {
        Connection con = null;
        Scanner sc = null;
        ResultSet rs = null;
        try
        {
            
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","mahesh12@");
            if(con == null)
            {
                System.out.println("Not Established....");
            }
            else
            {
                String query = "insert into studinfo values(?,?,?,?,?,?)";
                PreparedStatement ps = con.prepareStatement(query);
                sc = new Scanner(System.in);
                System.out.print("Enter Roll No.: ");
                int roll = sc.nextInt();
                System.out.print("Enter Name: ");
                String name = sc.next();
                System.out.print("Enter Age: ");
                int age = sc.nextInt();
                System.out.print("Enter Address: ");
                String address = sc.next();
                System.out.print("Enter Image URL: ");
                String image = sc.next();
                System.out.print("Enter Resume URL: ");
                String resume = sc.next();
                
                FileInputStream fis = new FileInputStream(image);
                FileReader fr = new FileReader(resume);
                
                ps.setInt(1,roll);
                ps.setString(2,name);
                ps.setInt(3,age);
                ps.setString(4,address);
                ps.setBinaryStream(5,fis);
                ps.setCharacterStream(6,fr);
                
                int count = 0;
                count = ps.executeUpdate();
                System.out.println(count+" rows affected......");
                System.out.print("Enter Roll No. of Student to retrive Data Of student: ");
                roll = sc.nextInt();
                query = "select * from studinfo where roll = ?";
                PreparedStatement ps1 = con.prepareStatement(query);
                ps1.setInt(1,roll);
                rs = ps1.executeQuery();
                if(rs.next())
                {
                    System.out.println("Retriving data.... 10%");
                    System.out.println("Retriving data.... 50%");
                    System.out.println("Retriving data.... 70%");
                    System.out.println("Retriving data.... 100%");
                    System.out.println("Retrived data Successfully...");
                    System.out.println(" | "+rs.getInt(1)+" | "+rs.getString(2)+" | "+rs.getInt(3)+" | "+rs.getString(4)+" | ");
                    
                    InputStream is = rs.getBinaryStream(5);
                    Reader is1 = rs.getCharacterStream(6);
                    FileOutputStream fos = new FileOutputStream("image.img");
                    FileOutputStream fos1 = new FileOutputStream("info.txt");
                    IOUtils.copy(is,fos);
                    IOUtils.copy(is1,fos1);
                    
                }
            }
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
