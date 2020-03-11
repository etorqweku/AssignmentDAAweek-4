#include <iostream>

using namespace std;
void fnswap(int *xp,int *yp)
{
    int temp = *xp;
    *xp=*yp;
    *yp=temp;
}
void selectionSort(int arr[],int n)
{
    int i , j,min_idx;
    for(i=0;i<n-1;i++)
        {
        min_idx = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx])
                min_idx=j;
            }
        fnswap(&arr[min_idx],&arr[i]);


        }
}
void printArray(int arr[],int siz_e)
{
    int i;
    for (i=0;i<siz_e;i++)
        cout<<arr[i]<<" "<<endl;
}
int main()
{
    cout<<"################################~SELECTION SORT~#####################################"<<endl;
    int n;
    cout<< "Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements "<<endl;
    for (int i =0;i<n;i++){
        cin >> arr[i];
    }

    selectionSort(arr,n);
    cout <<"Sorted array: \n";
    printArray(arr,n);

    return 0;
}
