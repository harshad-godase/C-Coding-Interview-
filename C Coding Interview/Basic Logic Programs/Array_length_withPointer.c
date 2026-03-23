
int main()
{
    int arr[]={1,2};

     int len = *(&arr+1)-(arr);
      printf("%d\n",(&arr));
      printf("%d\n",*(&arr+1));
       printf("%d\n",(arr));
    printf("%d",len);   

}