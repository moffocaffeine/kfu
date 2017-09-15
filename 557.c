#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
  int a[]; // объ€влен массив a
  int i;
  int j;
  int n;
  int m;
  printf("Vvod konechnogo chisla, kotoriy okanchivaet ryad poryadkovih chisel");
  scanf ("%d", &m);
  n=m-1
  for (i = 2; i<=n; i++) // ¬вод элементов массива
  {
    a[i]=i;
  }
  for (j = 2; j<=n; i++)  // ќпераци€ "–ешето Ёратосфена"
  {
     if(a[j]>0)
     {
         for (i = j; i<=n; i++)
         {
              if (a[j]%a[i] == 0) {a[i]=0;}
         }
    }
  }
for (i = 2; j<=n; i++) // ¬ывод элементов массива
  {
     if (a[i]>0)
     {
      printf("%d ", a[i]);
      getchar(); getchar();
    return 0;
     }
  }
}
