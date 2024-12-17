#include <iostream>
using namespace std;

template<typename T>
void getdata(T arr[], int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the element :- ";
        cin>>arr[i];
    }
}

template<typename T>
void show(T arr[], int size)
{
    
    for (int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

template<typename T>
void selection_sort(T arr[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for (int j=i+1; j<size ; j++)
        {   if(arr[j]<arr[min])
            {min=j;}
        }
        swap(arr[i],arr[min]);
    }
}

int main (){

    
    while(1)
    { 
    cout<<"\n\n\tMENU"<<endl;
    cout<<"1. Accept the integer array & Sorting "<<endl;
    cout<<"2. Accept the float array & Sorting"<<endl;
    cout<<"3. Exit "<<endl;
    int ch;
    cout<<"Enter your Choice :- ";
    cin>>ch;

   
        if(ch==1)
        {
            int size;
            cout<<"Enter the size of array :- "<<endl;
            cin>>size;

            int arr1[size];
            getdata(arr1,size);
            cout<<"Entered Array "<<endl;
            show(arr1,size);
            cout<<endl;
            selection_sort(arr1,size);
            cout<<"Sorted Array "<<endl;
            show(arr1,size);
        }

        else if(ch==2)
        {
            int size;
            cout<<"Enter the size of array :- "<<endl;
            cin>>size;

            float arr2[size];
            getdata(arr2,size);
            cout<<"Enterd Array :- "<<endl;
            show(arr2,size);
            cout<<endl;
            selection_sort(arr2,size);
            cout<<"Sorted Array "<<endl;
            show(arr2,size);

        }
        else if(ch==3)
        {
            cout<<"Thank You!! "<<endl;
            break;
        }
        else
        {
            cout<<"Invalid Choice "<<endl;
        }
    }
return 0;
}