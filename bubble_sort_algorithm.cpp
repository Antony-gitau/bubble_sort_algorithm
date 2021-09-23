#include<iostream>
using namespace std;

void bubble_sort(int arry[], int arrysize){ //create a bubble sort function
    for (int i=0; i <arrysize-1;i++){ //iterate through all the values in the array
        int flag = 0;  //initialize a flag 

        for(int j =0;j<arrysize-i-1;j++){  //swap function;  swap until the unsorted part
            if (arry[j]>arry[j+1]){ //swap conditions
                int temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1]=temp;
            }
          flag = 1;   //flag changes when swap happens 
        }
        if (flag == 0){ //else the array is already sorted hence no need to run the function again
            break;
        }
    }
}

int main(){
    int arry[] = {20,19,22,17,14,27,30,5}; //array values
    bubble_sort(arry, 8); // calling the bubble sort

//print the values of the sorted array
for (int k = 0; k<8;k++){
    cout<<arry[k]<<" ";
}
}