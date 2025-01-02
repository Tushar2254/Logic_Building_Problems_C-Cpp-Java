//   i/p = 5
//   o/p  =  *  *   *   *   *

import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow ;

    public Pattern(int a)
    {
        iRow = a;
        //iCol = b;
    }
    public void DisplayPattern()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iRow; iCnt++)
        {
            System.out.print("*\t");
        }
    }
}

class program151_1
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern(5);

        pobj.DisplayPattern();

    }
}
