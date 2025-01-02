#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize;
        int *Arr;

    public:
        ArrayX(int iValue)
        {
            this->iSize = iValue;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the number of Element"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            int iCnt = 0;
            cout<<"Elements in Array is:"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
        int Summation()
        {
            int iCnt = 0;
            int iSum = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    int iRet = 0;
    int iValue = 0;

    cout<<"Enter number of elements in array:"<<endl;
    cin>>iValue;

    ArrayX obj1(iValue);

    obj1.Accept();
    obj1.Display();

    iRet = obj1.Summation();

    cout<<"Addition is:"<<iRet<<endl;

    return 0;
}
