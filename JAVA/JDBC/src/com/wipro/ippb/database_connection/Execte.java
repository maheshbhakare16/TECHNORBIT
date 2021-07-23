package com.wipro.ippb.database_connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.SQLSyntaxErrorException;
import java.sql.Connection;
import java.sql.Statement;
import java.sql.ResultSet;
import java.util.Scanner;
class Execte
{
	public static void main(String args[])
	{
//      com.mysql.cj.jdbc.Driver obj = new com.mysql.cj.jdbc.Driver();
//      Class.forName("com.mysql.cj.jdbc.Driver");
// 		DriverManager.registerDriver(obj);


//  ----------------------------------- CONNECTION ESTABLISH -------------------------------
		Connection con = null;
		try
		{
		
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","mahesh12@");
            Scanner sc = new Scanner(System.in);
            if(con == null)
            {
                System.out.println("Not Established");
                
            }
            else
            {

                Statement st =null;
                st = con.createStatement();
                String query = sc.nextLine();
                boolean result = st.execute(query);
                if (result == true)
                {
                    ResultSet rs = st.getResultSet();
                    while(rs.next() != false)
                    {
                        System.out.println(" | "+rs.getInt(1)+" | "+rs.getString(2)+" | ");
                    }
                }
                else
                {
                    int count;
                    count = st.getUpdateCount();
                    System.out.println(count+" rows affected....");
                }
                
            }
        }
        
        catch(NullPointerException  | ArithmeticException | SQLException e )
        {
            System.out.println(e.getMessage());
        }
//         catch(SQLSyntaxErrorException e)
//         {
//             System.out.println(e.getMessage());
//         }
//         catch(SQLException e)
//         {
//             System.out.println(e.getMessage());
//         }
  /*      
        finally
        {
            try
            {
                con.close();
            }
            catch(SQLSyntaxErrorException e)
            {
                System.out.println(e.getMessage());
            }
            catch(SQLException e)
            {
                System.out.println(e.getMessage());
            }
            catch(NullPointerException ne)
            {
                System.out.println(ne);
            }
            catch(Exception e)
            {
                System.out.println(e.getMessage());
            }
        }*/
        
	}
}
