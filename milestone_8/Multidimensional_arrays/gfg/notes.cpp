/*
1. A single dimensional array can be declared as int a[10] or int a[] = {1, 2, 3, 4}.
   It means specifying the number of elements is optional in 1-D array.
2. A two dimensional array can be declared as int a[2][4] or int a[][4] = {1, 2, 3, 4, 5, 6, 7, 8}.
   It means specifying the number of rows is optional but columns are mandatory.
3. The declaration of int a[4] will give the values as garbage if printed.
   However, int a[4] = {1,1} will initialize remaining two elements as 0.

   00 01 02
   10 11 12

   For a single dimensional array a[100], address of ith element can be found as:
   addr(a[i]) =  BA+ i*SIZE

   For a given array with m rows and n columns, the address can be calculated as:
   add(a[i][j]) = BA + (i*n + j) * SIZE

   Therefore, for a 3 D array X[M][N][O], the address of X[i][j][k] can be calculated as:
   BA + (i*N*O+j*O+k)*SIZE

   In a single dimensional array a[100], the element a[i] can be accessed as a[i] or *(a+i) or *(i+a)
   Address of a[i] can be accessed as &a[i] or (a+i) or (i+a)
   In two dimensional array a[100][100], the element a[i][j] can be accessed as a[i][j] or *(*(a+i)+j) or *(a[i]+j)
   Address of a[i][j] can be accessed as &a[i][j] or a[i]+j or *(a+i)+j
   In two dimensional array, address of ith row can be accessed as a[i] or *(a+i)
*/