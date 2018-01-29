
int LIS(int *array,int arraySize){
    int temp[arraySize], i, pos;
    temp[0]=array[0];
    int length=1;
    for(i=1;i<arraySize;i++){
        if(array[i]>temp[length-1]){
            temp[length] = array[i];
            length++;
        }
        else{
            pos = BiSearch(temp,length,array[i]); 
            temp[pos] = array[i];
        }
    }
    return length;
}

int BiSearch(int *data,int length,int key){
    int low=0, high=length-1, mid;
    while(low<=high){
        mid = (low+high)/2;
        if(data[mid]>key)
            high = mid-1;
        else if(data[mid]<key)
            low = mid+1;
        else
            return mid;
    }
    return low; 
}

