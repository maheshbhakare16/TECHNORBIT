
package com.cisco.ubin;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.PreparedStatement;
import java.text.SimpleDateFormat;
import java.io.FileInputStream;
import java.io.InputStream;

class StudentForm implements ActionListener
{
    JFrame fm = null;
    JLabel lblname = null;
    JLabel lblclgname = null;
    JLabel lblage = null;
    JLabel lblgender = null;
    JLabel lbldob = null;
    JLabel lblimage = null;
    JTextField txtname = null;
    JTextField txtclgname = null;
    JTextField txtage = null;
    JTextField txtgender  = null;
    JTextField txtdob = null;
    JTextField txtimage = null;
    JButton btnsave = null;
    JButton btncancel = null;
    
    StudentForm()
    {
        fm = new JFrame("Application Form");
        fm.setLocation(500,100);
        fm.setSize(500, 500);
        fm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fm.setLayout(null);
        init_componants();
        fm.setVisible(true);
    }
    
    void init_componants()
    {
        lblname = new JLabel();
        lblname.setText("Full Name :");
        lblname.setBounds(20, 20, 200, 20);
        fm.add(lblname);
        
        lblclgname = new JLabel();
        lblclgname.setText("College Name :");
        lblclgname.setBounds(20, 60, 200, 20);
        fm.add(lblclgname);
        
        lblage = new JLabel();
        lblage.setText("Age :");
        lblage.setBounds(20, 100, 200, 20);
        fm.add(lblage);
        
        lblgender = new JLabel();
        lblgender.setText("Gender :");
        lblgender.setBounds(20, 140, 200, 20);
        fm.add(lblgender);
        
        lbldob  = new JLabel();
        lbldob.setText("Date Of Birth(dd-MM-yyyy) :");
        lbldob.setBounds(20, 180, 200, 20);
        fm.add(lbldob);
        
        lblimage  = new JLabel();
        lblimage.setText("Photo :");
        lblimage.setBounds(20, 220, 200, 20);
        fm.add(lblimage);
        
        txtname = new JTextField();
        txtname.setBounds(240, 20, 200, 20);
        fm.add(txtname);
        
        txtclgname = new JTextField();
        txtclgname.setBounds(240, 60, 200, 20);
        fm.add(txtclgname);
        
        txtage = new JTextField();
        txtage.setBounds(240, 100, 200, 20);
        fm.add(txtage);
        
        txtgender = new JTextField();
        txtgender.setBounds(240, 140, 200, 20);
        fm.add(txtgender);
        
        txtdob = new JTextField();
        txtdob.setBounds(240, 180, 200, 20);
        fm.add(txtdob);
        
        txtimage = new JTextField();
        txtimage.setBounds(240, 220, 200, 20);
        fm.add(txtimage);
        
        btnsave = new JButton();
        btnsave.setText("SAVE");
        btnsave.setBounds(60,260,100,30);
        btnsave.setFocusPainted(false);
        btnsave.addActionListener(this);
        fm.add(btnsave);
        
        
        btncancel = new JButton();
        btncancel.setText("CANCEL");
        btncancel.setBounds(280, 260, 100, 30);
        btncancel.setFocusPainted(false);
        btncancel.addActionListener(this);
        fm.add(btncancel);
        
    }
    
    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource() == btnsave)
        {
            if(saveToDatabase())
            {
                System.out.println("Saved Successfully");
            }
            else
            {
                System.out.println("Error ...............");
            }
        }
        else if(ae.getSource()== btncancel)
        {
            System.exit(0);
        }
    }
    
    boolean saveToDatabase()
    {
        String query = "insert into ApplicationForm values(?, ?, ?, ?, ?, ?)";
        try(Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/LoginAuthentication","mahesh","mahesh12@"); PreparedStatement ps = con.prepareStatement(query))
        {
        int count=0;
            ps.setString(1, txtname.getText());
            ps.setString(2, txtclgname.getText());
            ps.setInt(3, Integer.parseInt(txtage.getText()));
            ps.setString(4, txtgender.getText());
            
            SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-yyyy");
            java.util.Date ud = sdf.parse(txtdob.getText());
            java.sql.Date sd = new java.sql.Date(ud.getTime());
            
            ps.setDate(5, sd);
            
            FileInputStream fis = new FileInputStream(txtimage.getText());
            ps.setBinaryStream(6, fis);
            
            count = ps.executeUpdate();
            if(count > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        catch(SQLException se)
        {
            System.out.println(se);
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
        return false;
    }
}

class Main
{
    public static void main(String[] args)
    {
        StudentForm sf = new StudentForm();
    }
}
