import java.io.*;
import java.net.*;
import java.awt.*;
import java.awt.event.*;

class Client extends Frame implements ActionListener
{
	Button b1;
	TextField t1;
	Label l1;

	Socket s;
	PrintStream ps;
	BufferedReader br1;

	Client(String str,int x,int y)
	{

		super();
		addWindowListener(new WindowAdapter()
                {
                        public void windowClosing(WindowEvent w)
                        {
                                System.exit(0);
                        }
                });

		setTitle(str);
		setSize(x,y);

		b1 = new Button("Send");
		l1 = new Label("",Label.CENTER);
		t1 = new TextField();

		l1.setBounds(5,50,123,40);
                t1.setBounds(5,450,310,40);
                b1.setBounds(350,450,123,40);
		
		add(l1);
		add(t1);
		add(b1);

		b1.addActionListener(this);
		
		setLayout(null);
		setVisible(true);
	}

	public void actionPerformed(ActionEvent obj)
	{
 		String str1;
		str1 = t1.getText();
		ps.println(str1);	
	}
}


class Clie
{
	public static void main(String a[])
	{
		Client mObj = new Client("SHE",500,500);
		String str1;
		try
                {
		
    	            	 mObj.s = new Socket("Localhost",2100);
        	         mObj.ps = new PrintStream(mObj.s.getOutputStream());
                	 mObj.br1 = new BufferedReader(new InputStreamReader(mObj.s.getInputStream()));
                
			while( !(str1=mObj.br1.readLine()).equals("exit"))
                        {

	                         mObj.l1.setText("He said: "+str1);
			} 
    		
			mObj.br1.close();
                        mObj.ps.close();

		}
                catch(IOException io)
                {
                        System.out.println(io);
                }
	

	}
}


