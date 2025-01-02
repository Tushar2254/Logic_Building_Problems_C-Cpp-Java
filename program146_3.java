import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Number is:"+iNo);
    }

    public void ChkEven()
    {
        if(iNo % 2 == 0)
        {
            System.out.println("Number is even");
        }
        else
        {
            System.out.println("Number is Odd");
        }
    }
}

class program146_3
{
    public static void main(String arg[])
    {
        Number nobj = new Number();

        nobj.Accept();
        nobj.Display();

        nobj.ChkEven();

    }
}
