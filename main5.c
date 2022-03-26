#include<stdio.h>
int main()
{
  int n,f,m,l,i,j,t,k;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements in the array\n");
  for(i=0;i<n;i++)
  scanf("%d", &a[i]);
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
           t=a[j];
           a[j]=a[j+1];
           a[j+1]= t;
          }
        }
    }
  printf("Enter the key element\n");
  scanf("%d", &k);
  f=0;
  l=n-1;
  m=(f+l)/2;
  while(f<=l)
    {
      if(a[m]==k)
      {
       printf("The elemnt %d is found at %d\n", k,m+1);
       return 0;
      }
      else if(a[m]>k)
      {
        l=m-1;
      }
      else 
      {
        f=m+1;
        }
      m=(f+l)/2;
    }
  printf("The element %d isnt found\n", k);
  return 1;
}