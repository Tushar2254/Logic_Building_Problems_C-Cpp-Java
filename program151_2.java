import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow , iCol;

    public Pattern(int a , int b)
    {
        iRow = a;
        iCol = b;
    }
    public void DisplayPattern()
    {
        int i = 0;
        int j = 0;

        for(i = 1; i<=iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println("");
        }
    }

    
}

class program151_2
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj1 = new Scanner(System.in);
        System.out.println("Enter Rows:");
        iValue1 = sobj1.nextInt();

        Scanner sobj2 = new Scanner(System.in);
        System.out.println("Enter Columns:");
        iValue2 = sobj2.nextInt();

        Pattern obj = new Pattern(iValue1 , iValue2);

        obj.DisplayPattern();

    }
}