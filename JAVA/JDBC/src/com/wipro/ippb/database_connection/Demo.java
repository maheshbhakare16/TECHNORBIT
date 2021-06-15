package com.wipro.ippb.database_connection;
import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.Statement;
import java.sql.ResultSet;
import java.util.Scanner;
class Demo
{
	public static void main(String args[]) throws Exception
	{
// 		com.mysql.cj.jdbc.Driver obj = new com.mysql.cj.jdbc.Driver();
//      Class.forName("com.mysql.cj.jdbc.Driver");
// 		DriverManager.registerDriver(obj);
		Connection con = null;
		con = DriverManager.getConnection("jdbc:mysql://localhost:3306/mydb","root","mahesh12@");
		
		if(con == null)
		{
			System.out.println("Not Established");
			
		}
		else
		{
			int count;
			Statement st = con.createStatement();
			Scanner sc = new Scanner(System.in);
			
			
			
// 			System.out.print("Enter name of student: ");
// 			String s1 = sc.nextLine();
// 			String query = "select * from stud where name = '"+s1+"'";
// 			ResultSet rs = st.executeQuery(query);
// 			while(rs.next() != false)
// 			{
// 				System.out.println( rs.getInt("roll")+" | "+rs.getString("name")+" | "+rs.getInt("age")+" | "+rs.getFloat("marks"));
// 			}



//             System.out.print("Enter roll no of student: ");
// 			int roll = sc.nextInt();
// 			System.out.print("Enter name of student: ");
// 			String name = sc.next();
// 			System.out.print("Enter age of student: ");
// 			int age = sc.nextInt();
// 			System.out.print("Enter marks of student: ");
// 			float marks = sc.nextFloat();
// 			
//  			String query1 =  "insert into stud(roll,name,age,marks) values ("+roll+",'"+name+"',"+age+","+marks+")";
//  			count = st.executeUpdate(query1);
//  			if (count == 0)
//  			{
//                 System.out.println("error in insering datain database stud ...");
//  			}
//  			else
//  			{
//                 System.out.println(count+" rows affected");
//  			}
 			
 			
 			
//  			System.out.print("Enter roll no of student: ");
// 			roll = sc.nextInt();
// 			String query =  "delete from stud where roll = "+roll;
//  			count = st.executeUpdate(query);
//  			if (count == 0)
//  			{
//                 System.out.println("error in deleting data from database stud ...");
//  			}
//  			else
//  			{
//                 System.out.println(count+" rows affected");
//  			}
//  			
 			
 			System.out.print("Enter roll no of student to update: ");
			int roll = sc.nextInt();
			System.out.print("Enter new name of student: ");
			String name = sc.next();
 			String query = "update stud set name = '"+name+"' where roll = "+roll;
 			count = st.executeUpdate(query);
 			if (count == 0)
 			{
                System.out.println("error in updating data in database stud ...");
 			}
 			else
 			{
                System.out.println(count+" rows affected");
 			}
			

		}
	}
}
