#include <iostream>

using namespace std;


void bubleshort(int arr[], int Size) {

    for(int step=1; step<Size-1;step++){

        for (int i =0; i<Size-step;i++){

            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}


void displayArr(int arr[], int Size){

    for(int i=0;i<Size;i++){

        cout<<arr[i]<<endl;

    }

}



int main()
{


    int arr[]={56,42,5,87,34,23};

    int Size=sizeof(arr)/sizeof(arr[0]);


    //cout<<Size<<endl;

    cout<<"=====after======="<<endl;

    for (int i=0; i<Size;i++) {
        cout<<arr[i]<<endl;
    }

    bubleshort(arr,Size);
    cout<<"=====after======="<<endl;
    displayArr(arr,Size);


    return 0;
}
