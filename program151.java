 // Template for probplems on pattern printing


import java.lang.*;
import java.util.*;
import java.util.regex.Pattern;

class pattern
{
    private int iRow , iCol;

    public Pattern(int a , int b)
    {
        iRow = a;
        iCol = b;
    }

    public void DisplayPattern()
    {
        
    }

}

class program151
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern(4 , 4);

        pobj.DisplayPattern();
    }
}