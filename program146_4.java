// Accept number from user and display its factors

// Input :      10
// Output :    1    2   5

// Input :      9
// Output :     1     3

// Input :          17
// Output :         1

// Input :          20
// Output :         1   2   4   5   10

// Input :          -20
// Output :         1     2     4       5       10

import java.io.IOException;
import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        this.iNo = sobj.nextInt();
        if(iNo < 0)
            {
                iNo = -iNo;
            }
    }

    public void Display()
    {
        System.out.println("Entered Number is:"+this.iNo);
    }

    public void Factor()
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt <= this.iNo; iCnt++)
        {
            
            if(iNo % iCnt == 0)
            {
                System.out.println(+iCnt);
            }
            else
            {
                //System.out.println("Number is not Divided");
            }
        }
    }

}
class program146_4
{
    public static void main(String arg[])throws IOException
    {
        Number nobj = new Number();

        nobj.Accept();
        nobj.Display();

        nobj.Factor();
    }
}