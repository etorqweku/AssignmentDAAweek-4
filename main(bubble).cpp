#include <iostream>

using namespace std;
void bubbleSort(int arr[],int siz_e)
{ for (int j=0;j<siz_e-1;j++){
    for (int i=0;i<siz_e-j-1;i++){
        if (arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1] = temp;
        }
    }
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
     cout<<"################################~BUBBLE SORT~#####################################"<<endl;
    int n;
    cout<< "Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements "<<endl;
    for (int i =0;i<n;i++){
        cin >> arr[i];
    }

    bubbleSort(arr,n);
    cout <<"Sorted array: \n";
    printArray(arr,n);

    return 0;
}
