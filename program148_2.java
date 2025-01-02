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
        System.out.println("Enter elements in Array:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        int iCnt = 0;
        System.out.println("Entered elements are:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    public int Frequency()
    {
        int iCnt = 0;
        int iFreq = 0;
        int iCount = 0;;

        Scanner sobj1 = new Scanner(System.in);
        System.out.println("Enter the elements to calculate the frequency:");
        iFreq = sobj1.nextInt();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iFreq)
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class program148_2
{
    public static void main(String arg[])
    {
        int iLength = 0;
        int iRet = 0;

        Scanner sobj1 = new Scanner(System.in);
        System.out.println("Enter number of Elements:");
        iLength = sobj1.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();
        obj.Display();

        iRet = obj.Frequency();
        System.out.println("Frequency is:"+iRet);
    }
}