import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }
    public void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter values for Array:");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        int iCnt = 0;
        System.out.println("Entered elemets are:");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    public void DisplayEven()
    {
        int iCnt = 0;
        System.out.println("Even elements are:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}
class program148_1
{
    public static void main(String arg[])
    {
        int iLength = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of elements:");
        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();
        obj.Display();
        obj.DisplayEven();

    }
}