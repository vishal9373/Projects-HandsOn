import java.awt.*;
import java.awt.event.*;

class Cal extends Frame implements ActionListener
{
	Button b1,b2,b3,b4;
	TextField t1,t2;
	Label l1;

	Cal(String str,int x,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		
		b1 = new Button("Addition");
		b2 = new Button("Subtraction");
		b3 = new Button("Multiplication");
		b4 = new Button("Division");
		
		l1 = new Label("",Label.CENTER);
		t1 = new TextField();
		t2 = new TextField();

		l1.setSize(500,100);
		t1.setBounds(200,150,100,50);
		t2.setBounds(200,200,100,50);
		
		b1.setBounds(50,400,100,50);
		b2.setBounds(150,400,100,50);
		b3.setBounds(250,400,100,50);
		b4.setBounds(350,400,100,50);
		
		add(l1);

		add(t1);
		add(t2);

		add(b1);
		add(b2);
		add(b3);
		add(b4);

		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		
		setLayout(null);
		setVisible(true);
	}

	public void actionPerformed(ActionEvent obj)
	{
		String data1 = t1.getText();
		String data2 = t2.getText();

		int x = Integer.parseInt(data2);
		int y = Integer.parseInt(data1);

		if(obj.getSource() == b1)
		{
			l1.setText("Addition is: "+(x+y));
		}
		else if(obj.getSource() == b2)
		{
			l1.setText("Subtraction is: "+(x-y));
		}
		else if(obj.getSource() == b3)
		{
			l1.setText("Multiplication is: "+(x*y));
		}
		else if(obj.getSource() == b4)
		{
			l1.setText("Division is: "+(x%y));
		}	
	}	
}

class Chat
{
	public static void main(String a[])
	{
		Cal mObj = new Cal("Calculator Application",500,500);
	}
}






