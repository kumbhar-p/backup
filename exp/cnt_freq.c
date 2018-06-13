void cnt(int arr[],int size)
{
    for(int i=0;i<size;++i)
        arr[(arr[i]-1)%(size+1)] += size+1;
    for(int i=0;i<size;++i)
        cout<<"\nFrequency of "<<i+1<<" is : "<<arr[i]/(size+1);
}
