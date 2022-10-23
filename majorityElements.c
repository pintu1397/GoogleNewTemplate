//program to find elements of array appearing more than N/2 times.

int majorityElement(int a[], int size)
{
        
    // your code here
    
    int i,j,count1=0;
    int count2=0;
    int element=0;
    int halfSize=size/2;
    int n=size;
    
    for(i=0;i<n;i++){
        if(count1==0){
            element=a[i];
        }
        if(a[i]==element){
            count1++;
        }
        else{
            count1--;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==element){
            count2++;
        }
    }
    if(count2>halfSize){
        return element;
    }
    else
    return -1;
