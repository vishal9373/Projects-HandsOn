Imports System.Windws.Forms
Imports AutomationServerTypeLibForDotNet

Public Class VBAutomation
	Inherits Form
	Public Sub New()
		Dim MyIDispatch As Object
		Dim MyRef As new CMyMathClass
		MyIDispatch = MyRef
		Dim i Num1 = 175
		Dim iNum2 = 125
		Dim iSum = MyIDispatch.SumOfTwoIntegers(iNum1,iNum2)
		Dim str As String = String.Foramt("Sum of {0} And {1} Is {2}",iNum1,iNum2,iSum)
		Msgbox(str)
		Dim iSub = MyDispatch.SubtractionOfTwoIntegers(iNum1,iNum2,iSub)
		str = String.Foramt("Sum of {0} And {1} Is {2}",iNum1,iNum2,iSub)
		Msgbox(str)
		End
	End Sub

	<STAThread()>
	Shared Sub Main()
		Application.EnableVisualSyles()
		Application.run(New VBAutomation())
	End Sub
End Class
		
		