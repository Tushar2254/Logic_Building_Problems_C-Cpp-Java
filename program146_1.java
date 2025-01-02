// Program to display 1 to 5 on screen
// Output   1   2   3   4   5

import java.lang.*;
import java.util.*;

class Number 
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number :");
        this.iNo = sobj.nextInt();
    }
    public void Display()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<= iNo; iCnt++)
        {
            System.out.print("\t"+iCnt);
        }
    }
}

class program146_1
{
    public static void main(String arg[])
    {
        Number nobj = new Number();

        nobj.Accept();
        nobj.Display();

    }
}