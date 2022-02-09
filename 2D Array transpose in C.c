#include <stdio.h>

int main()
{
  int m, n, c, d, mat[10][10], tran[10][10];

  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &mat[c][d]);

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      tran[d][c] = mat[c][d];

  printf("tran of the mat:\n");

  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)
      printf("%d\t", tran[c][d]);
    printf("\n");
  }

  return 0;
}
