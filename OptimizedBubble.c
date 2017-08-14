/* Bubble Sort . :: we all know the code of Bubble Sort  in O(n^2) either in Worst Case and in Best case */
/* Here i am writing an optimized code for Bubble Sort whose Best case is O(n) and Worst Case is O(n^2) */

#include<stdio.h>
int main()
{
  int a[]={1,2,4,7,5,6,3};
  int n=sizeof(a)/sizeof(a[0]);
  int i,swapped;
  do
  {
    swapped=0;
    for(i=1;i<n;i++)
    {
      if(a[i-1]>a[i])
      {
        int t=a[i-1];
        a[i-1]=a[i];
        a[i]=t;
        swapped=1;
      }
    }
  while(swapped==1);
  
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
}
    
