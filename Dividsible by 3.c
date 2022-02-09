int main()
{
  int a,b,n,i;
  printf("ENTER THE RANGE:");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
      n=a;
      a=b;
      b=n;

  }
  for(i=a;i<=b;i++)
  {
      if(i%3==0)
      printf("%d\t",i);
  }

    return 0;

}
