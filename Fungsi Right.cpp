/* Program: Validasi_Right_Saiful.c
 * Deskripsi: Menampilkan N buah karakter terkanan dari array karakter
 * Nama: Muhammad Alvin Abdul Rozak Kusuma Putra
 * Tanggal/versi: 04/11/2022
 */
 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
     char arr[30];
     int i, j, k;
     
    scanf("%[^\n]", arr);
    scanf("%d", &k);
	i = strlen(arr);
	j = i - k;
	while (j < i)
	{
		printf("%c", arr[j]);
		j = j + 1;
		
	}
	return 0;
 }		
