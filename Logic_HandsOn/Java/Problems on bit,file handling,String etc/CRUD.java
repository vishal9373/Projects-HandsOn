import java.awt.*;
import java.awt.event.*;
import java.sql.*;

class Connectivity extends Frame implements ActionListener
{
	Button b1,b2,b3,b4;
	TextField t1,t2,t3,t4;
	Label l1,l2,l3,l4,l5;
	Connection conn;
	PreparedStatement stmt;

	Connectivity(String str,int x,int y)
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
		
		b1 = new Button("Save");
		b2 = new Button("Delete");
		b3 = new Button("Show records");
		
		l1 = new Label("",Label.CENTER);
		l2 = new Label ("Enter Name   :");   
   		l3 = new Label ("Enter RollNo :");   
   		l4 = new Label ("Enter City   :");   
   		l5 = new Label ("Enter Marks  :");   
 
		t1 = new TextField();
		t2 = new TextField();
		t3 = new TextField();
		t4 = new TextField();

		l1.setSize(500,100);
    		l2.setBounds(80, 150, 100, 30);    
    		l3.setBounds(80, 200, 100, 30);
    		l4.setBounds(80, 250, 100, 30);
    		l5.setBounds(80, 300, 100, 30);

		t1.setBounds(200,150,100,50);
		t2.setBounds(200,200,100,50);
		t3.setBounds(200,250,100,50);
		t4.setBounds(200,300,100,50);
		
		b1.setBounds(50,400,100,50);
		b2.setBounds(150,400,100,50);
		b3.setBounds(250,400,100,50);
		
		add(l1);
		add(l2);
		add(l3);
		add(l4);
		add(l5);

		add(t1);
		add(t2);
		add(t3);
		add(t4);

		add(b1);
		add(b2);
		add(b3);

		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		
		setLayout(null);
		setVisible(true);
	}

	public void actionPerformed(ActionEvent obj)
	{
		String Name    = t1.getText();
		String data1   = t2.getText();
		String City    = t3.getText();
		String data2   = t4.getText();

		int RollNo = Integer.parseInt(data1);
		int Marks = Integer.parseInt(data2);

		if(obj.getSource() == b1)
		{
			try
			{
				String str = "insert into CRUD(Name,RollNo,City,Marks) values(?,?,?,?)";
				stmt = conn.prepareStatement(str);

		        	stmt.setString(1,Name);
		        	stmt.setInt(2,RollNo);
		        	stmt.setString(3,City);
 		        	stmt.setInt(4,Marks);
				stmt.executeUpdate();

			}
			catch(Exception e){
			  e.printStackTrace();

			}
			l1.setText("Saved Successfully");
		}
		
		else if(obj.getSource() == b2)
		{
			try
			{
				String str = "DELETE FROM CRUD WHERE Name=?"; 
				PreparedStatement stmt = conn.prepareStatement(str);
				
				stmt.setString(1,Name);
				stmt.executeUpdate();

			}
			catch(Exception e)
			{
				e.printStackTrace();
			}

			l1.setText("Deleted Successfully");
		}
		
		else if(obj.getSource() == b3)
		{
			try
			{	
				Statement stmt = conn.createStatement();
         			ResultSet rs = stmt.executeQuery("SELECT * FROM CRUD");
      
			        while (rs.next()) 
        	 		{
	   		                 System.out.print(", Name: " + rs.getString("Name"));
           				 System.out.print(", Roll No: " + rs.getInt("RollNo"));
           				 System.out.print(", City: " + rs.getString("City"));
            				 System.out.println(", Marks: " + rs.getInt("Marks"));
         			}
			}
			catch(Exception io)
			{
				io.printStackTrace();
			}	

			l1.setText("Data is showed on Terminal");
		}
		
	}	
}

class CRUD
{
	public static void main(String a[])
	{
		Connectivity mObj = new Connectivity("Information Storage Application",500,500);
		try
		{
			mObj.conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Operations","root","Vishal@9373");
		}
		catch(Exception io)
		{
		
		}
	}
}






