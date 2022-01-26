int  Binary_search(int a[],int searchelement,int size)
{
    int low,mid,high;
     
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==searchelement)
        {
             
            return mid;
             
        }
        else if (a[mid]<searchelement)
        {
            low=mid+1;
            
        }
        else
        {
            high=mid-1;
        }
         
    }
}
int main()
{
    int a[50], size,searchelement;
    int x;
     
    printf("Enter the Size of array\n");
    scanf("%d",&size);
    printf("\nEnter the elemnts in array=\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element For Search=\n");
    scanf("%d",&searchelement);
    x=Binary_search(a,searchelement,size);
    printf("Element %d Found at index no. %d",searchelement,x);
}
