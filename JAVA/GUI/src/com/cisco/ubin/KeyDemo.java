package com.cisco.ubin;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JButton;
import java.awt.event.KeyListener;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.event.KeyEvent;
import java.awt.event.KeyAdapter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.ResultSet;
import java.sql.PreparedStatement;
class KeyDemo implements ActionListener
{
    JFrame frame = null;
    JLabel lblUserName = null;
    JLabel lblPassword = null;
    JTextField txtfldUserName = null;
    JPasswordField txtfldPassword = null;
    JButton btnlogin = null;
    JButton btncancel = null;
    
    KeyDemo()
    {
        frame = new JFrame("Login");
        frame.setSize(430,250);
        frame.setLocation(500,100);
        frame.setResizable(false);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setBackground(java.awt.Color.CYAN);
        frame.setLayout(null);
        this.initComponant();
        frame.setVisible(true);
    }
    void initComponant()
    {
        lblUserName = new JLabel();
        lblUserName.setText("Username : ");
        lblUserName.setBounds(100, 50, 100, 30);
        frame.add(lblUserName);
        
        txtfldUserName = new JTextField();
        txtfldUserName.setBounds(230, 50, 100, 30);
        frame.add(txtfldUserName);
        txtfldUserName.addKeyListener(new Demo());
        
        lblPassword = new JLabel();
        lblPassword.setText("Password : ");
        lblPassword.setBounds(100, 110, 100, 30);
        frame.add(lblPassword);
        
        txtfldPassword = new JPasswordField();
        txtfldPassword.setBounds(230, 110, 100, 30);
        frame.add(txtfldPassword);
        txtfldPassword.addKeyListener(new Demo());
        
        btnlogin = new JButton();
        btnlogin.setText("LogIn");
        btnlogin.setBounds(100, 170, 100, 30);
        btnlogin.setFocusPainted(false);
        frame.add(btnlogin);
        btnlogin.addActionListener(this);
        
        btncancel = new JButton();
        btncancel.setText("Cancel");
        btncancel.setBounds(230, 170, 100, 30);
        btncancel.setFocusPainted(false);
        frame.add(btncancel);
        btncancel.addActionListener(this);
        
    }
    
    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getActionCommand() == "LogIn")
        {
            if(LoginAuthentication())
            {
                System.out.println("Login Successfully .....");
            }
            else
            {
                System.out.println("Login Failed .....");
            }
        }
        else if(ae.getActionCommand() == "Cancel")
        {
            System.exit(0);
        }
    }
    
    class Demo extends KeyAdapter
    {
        public void keyReleased(KeyEvent ke)
        {
            if(ke.getSource() == txtfldUserName)
            {
                txtfldPassword.setText(txtfldUserName.getText());
            }
            else if(ke.getSource() == txtfldPassword)
            {
                if(ke.getKeyText(ke.getKeyCode()) == "Enter")
                {
                    if(LoginAuthentication())
                    {
                        System.out.println("Login Successfully .....");
                    }
                    else
                    {
                        System.out.println("Login Failed .....");
                    }
                }
            }
            
        }
    }
    
    boolean LoginAuthentication()
    {
        Connection con = null;
            try
            {
                con = DriverManager.getConnection("jdbc:mysql://localhost:3306/LoginAuthentication","mahesh","Mahesh$123");
                if(con == null)
                {
                    System.out.println("Not Established");
                }
                else
                {
                    int count;
                    String query = "select count(uname) as count from Login where uname = ? and password = ?";
                    PreparedStatement ps = con.prepareStatement(query);
                    ps.setString(1, txtfldUserName.getText());
                    ps.setString(2, txtfldPassword.getText());
                    ResultSet rs = ps.executeQuery();
                    rs.next();
                    count = rs.getInt("count");
                    if(count == 0)
                    {
                        return false;
                    }   
                    else
                    {
                        return true;
                    }
                }
            }
            catch(ArithmeticException e)
            {
                System.out.println(e);
            }
            catch(SQLException se)
            {
                System.out.println(se);
            }
            finally
            {
            System.out.println("Finally");
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
            return false;
    }
}
 
class Main
{
    public static void main(String[] args)
    {
        KeyDemo kd = new KeyDemo();
    }
}
