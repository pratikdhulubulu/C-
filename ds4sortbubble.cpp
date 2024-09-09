#include<iostream>
using namespace std;

int bubblesort(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(array[i]<array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }


}

int main()
{
    int size;
    cout<<"Enter array size: "<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    
    cout<<"array elements after sorting:"<<endl;
   bubblesort(array,size);


    return 0;
}