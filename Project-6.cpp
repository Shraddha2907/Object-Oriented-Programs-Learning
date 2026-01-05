#include<iostream>
using namespace std;
int n;
#define size 10
template<class T>
void sel(T A[size])
{
    int i,j,min;
    T temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(i=0;i<n;i++)
        {
        if(A[j]<A[min])
        min=j;
        }
    
        temp=A[i];
        A[i]=temp;
        A[min]=temp;
    }
    cout<<"\nSorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
}

int main()
{
    int A[size];
    float B[size];
    int i;

    cout<<"\nEnter total number of int elements: ";
    cin>>n;
    cout<<"\nEnter int elements: ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sel(A);

    cout<<"\nEnter total no. of float elements: ";
    cin>>n;
    cout<<"\nEnter float elements: ";
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    sel(B);
}
