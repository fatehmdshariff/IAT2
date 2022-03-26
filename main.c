#include <stdio.h>
int main(void) 
{
int a[10][10],b[10][10],c[10][10], m,n,p,q,i,j,k;
  printf("Enter the order of matrix A\n");
  scanf("%d%d", &m,&n);
  printf("Enter the order of matrix B\n");
  scanf("%d%d", &p,&q);
  printf("Enter The elements of matrix A %dx%d\n", m,n); 
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d", &a[i][j]);
      }
    }
  printf("Enter The elements of matrix B %dx%d\n", p,q); 
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        scanf("%d", &b[i][j]);
      }
    }
  if(n!=p)
  {
    printf("Multiplication noy possible\n");
    return 1;
  }
  for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j] = 0;
for(k=0;k<n;k++)
{
c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
}
}
}

  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d\t", c[i][j]);
        }
      printf("\n");
    }
  return 0;
}