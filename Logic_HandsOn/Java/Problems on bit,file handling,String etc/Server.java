import java.awt.*;
import java.io.*;
import java.net.*;
import java.awt.event.*;

class Server extends Frame implements ActionListener
{
	Button b1;
	TextField t1;
	Label l1;
	
	ServerSocket ss;
	Socket s;
	PrintStream ps;
	BufferedReader br1;

	Server(String str,int x,int y)
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

class Serv
{
	public static void main(String a[])
	{
		Server mObj = new Server("HE",500,500);
		String str1;	
		try
                {
                	mObj.ss = new ServerSocket(2100);
                	mObj.s = mObj.ss.accept();
                	mObj.ps = new PrintStream(mObj.s.getOutputStream());
               
			System.out.println("Successfully Established.......");
                	mObj.br1 = new BufferedReader(new InputStreamReader(mObj.s.getInputStream()));
		
			while( (str1 = mObj.br1.readLine())!=null)
			{
			
				mObj.l1.setText("She Said: "+str1+"\n");
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
































