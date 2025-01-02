// Input : 4
// Output : 10  (1+2+3+4)

// Input : 5
// Output : 15  (1+2+3+4+5)

// Input : 7
// Output : 28  (1+2+3+4+5+6+7)

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
    }

    public void Display()
    {
       System.out.println("Entered Number is:"+this.iNo);
    }
    public int Summation()
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1;iCnt <= iNo; iCnt++)
        {
            System.out.println(+iCnt);
            iSum = iSum+iCnt;
        }
        return iSum;
    }
}

class program146_2
{
        public static void main(String arg[])
        {
            Number nobj = new Number();
            int iRet = 0;

            nobj.Accept();
            nobj.Display();

            iRet = nobj.Summation();

            System.out.println("Addition is:"+iRet);
        }
}