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
//      com.mysql.cj.jdbc.Driver obj = new com.mysql.cj.jdbc.Driver();
//      Class.forName("com.mysql.cj.jdbc.Driver");
// 		DriverManager.registerDriver(obj);


//  ----------------------------------- CONNECTION ESTABLISH -------------------------------
		Connection con = null;
		con = DriverManager.getConnection("jdbc:mysql://localhost:3306/","root","mahesh12@");
		Scanner sc = new Scanner(System.in);
		if(con == null)
		{
			System.out.println("Not Established");
			
		}
		else
		{

// 		--------------------------------- CREATE DATABASE -----------------------------------

			int count;
// 			String dbname = sc.next();
            String dbname;
			Statement st = con.createStatement();
			String query= "create database student";
			count = st.executeUpdate(query);
			if(count == 0)
			{
                System.out.println("no database created...");
			}
			else
			{
                System.out.println("student database created...");
			}
			
			

			
// 			--------------------------------- CONNECTION ESTABLISH ------------------------------
			
// 			con = null;
//          con = DriverManager.getConnection("jdbc:mysql://localhost:3306/"+dbname,"root","mahesh12@");
//          st = con.createStatement();
// 			if(con == null)
// 			{
//                 System.out.println("no database selected...");
// 			}
// 			else
// 			{
//                 System.out.println(dbname+" selected...");
// 			}
// 			
			
// 			-------------------------------------- CRTEATE -------------------------------------
            
            query = "create table student.studinfo(roll int primary key, name varchar(20), age int, marks float)";
            count= st.executeUpdate(query);
			if(count == 0)
			{
                System.out.println("no table created...");
			}
			else
			{
                System.out.println("table created...");
			}
			
			
// 			-------------------------- INSERT -------------------------------------
			
			
            System.out.print("Enter roll no of student: ");
			int roll = sc.nextInt();
			System.out.print("Enter name of student: ");
			String name = sc.next();
			System.out.print("Enter age of student: ");
			int age = sc.nextInt();
			System.out.print("Enter marks of student: ");
			float marks = sc.nextFloat();
            String query1 =  "insert into student.studinfo(roll,name,age,marks) values ("+roll+",'"+name+"',"+age+","+marks+")";
 			count = st.executeUpdate(query1);
 			if (count == 0)
 			{
                System.out.println("error in insering data in database studinfo ...");
 			}
 			else
 			{
                System.out.println(count+" rows affected");
 			}
 			
 			System.out.print("Enter name of student to search: ");
			String s1 = sc.next();
			query = "select * from student.studinfo where name = '"+s1+"'";
			ResultSet rs = st.executeQuery(query);
			while(rs.next() != false)
			{
				System.out.println( rs.getInt("roll")+" | "+rs.getString("name")+" | "+rs.getInt("age")+" | "+rs.getFloat("marks"));
			}
//  			-------------------------------- UPDATE -----------------------------
 			
 			System.out.print("Enter roll no of student to update: ");
			roll = sc.nextInt();
			System.out.print("Enter new name of student: ");
			name = sc.next();
 			query = "update student.studinfo set name = '"+name+"' where roll = "+roll;
 			count = st.executeUpdate(query);
 			if (count == 0)
 			{
                System.out.println("error in updating data in database stud ...");
 			}
 			else
 			{
                System.out.println(count+" rows affected");
 			}
 			
 			
// 			----------------------------------- DELETE --------------------------------
			
			System.out.print("Enter roll no of student to delete record: ");
			roll = sc.nextInt();
			query =  "delete from student.studinfo where roll = "+roll;
 			count = st.executeUpdate(query);
 			if (count == 0)
 			{
                System.out.println("error in deleting data from database stud ...");
 			}
 			else
 			{
                System.out.println(count+" rows affected");
 			}
 			

 			
//  		-------------------------- ALTER TABLE --------------------------------


 			System.out.println("Enter new column name for marks: ");
 			dbname = sc.next();
 			query= "alter table student.studinfo rename column marks to "+dbname+" ";
			count = st.executeUpdate(query);
			if(count == 0)
			{
                System.out.println("no table ALTERED...");
			}
			else
			{
                System.out.println("table ALTERED...");
			}
 			
//  	   ----------------------- DROP TABLE ----------------------------
 			System.out.println("Enter Table name to delete: ");
 			dbname = sc.next();
 			query= "drop table student."+dbname+";";
			count = st.executeUpdate(query);
			if(count == 0)
			{
                System.out.println("no table dropped...");
			}
			else
			{
                System.out.println("table dropped...");
			}
 			
//  	   ----------------------- DROP DATABASE ----------------------------
 			System.out.println("Enter Database name to delete: ");
 			dbname = sc.next();
 			query= "drop database "+dbname+";";
			count = st.executeUpdate(query);
			if(count == 0)
			{
                System.out.println("no database dropped...");
			}
			else
			{
                System.out.println("database dropped...");
			}
        }	
	}
}
