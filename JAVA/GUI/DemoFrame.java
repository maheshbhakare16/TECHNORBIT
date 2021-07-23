class DemoFrame
{
    DemoFrame()
    {

        javax.swing.JFrame frame = new javax.swing.JFrame("Login");
        frame.setVisible(true);
        frame.setSize(800,450);
        frame.setLocation(500,200);
        frame.setDefaultCloseOperation(javax.swing.JFrame.EXIT_ON_CLOSE);
//         frame.setBackground(java.awt.color.BLUE);
        frame.getContentPane().setBackground(java.awt.Color.ORANGE);
//         java.awt.Frame frame = new java.awt.Frame("Login");
//         frame.setVisible(true);
//         frame.setSize(200,200);
//         frame.setLocation(100,200);
//         frame.setBackground(java.awt.Color.CYAN);
    }
}

class Test
{
    public static void main(String[] args)
    {
        DemoFrame df = new DemoFrame();
    }
}
