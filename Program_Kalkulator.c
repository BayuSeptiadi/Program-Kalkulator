// Nama : Bayu Septiadi
// NIM  : 16020090

#include <stdio.h>

// Membuat sebuah fungsi kuadrat untuk perhitungan integral
float fungsi(float a, float b, float c, float x)
{
    return((a*x*x) + (b*x) + c);
}

// Membuat program utama
int main()
{
    int pilihan,i;
    float atas,bawah,a,b,c,total=1,n,h,sum1=0,sum,y0,yn; // Inisiasi variabel, agar kebaca sebagai integer ataupun float

    // Memberikan informasi kepada pemakai bagaimana cara menggunakan code
    printf("Kalkulator Sederhana\n");
    printf("Pilih angka untuk memilih program\n");
    printf("1. Untuk program penjumlahan\n");
    printf("2. Untuk program pengurangan\n");
    printf("3. Untuk program perkalian\n");
    printf("4. Untuk program pembagian\n");
    printf("5. Untuk program perpangkatan\n");
    printf("6. Untuk program integral tentu\n");

    printf(" Program berbentuk a + b , a - b, a x b, a / b, a^b\n");
    printf("Pilih program : ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        case 1:
            printf("Masukkan a: ");
            scanf("%f", &a);
            printf("Masukkan b: ");
            scanf("%f", &b);
            printf("Hasil penjumlahan nya yaitu : %f", a+b);
            break;

        case 2:
            printf("Masukkan a: ");
            scanf("%f", &a);
            printf("Masukkan b: ");
            scanf("%f", &b);
            printf("Hasil pengurangan nya yaitu : %f", a-b);
            break;

        case 3:
            printf("Masukkan a: ");
            scanf("%f", &a);
            printf("Masukkan b: ");
            scanf("%f", &b);
            printf("Hasil perkalian nya yaitu : %f", a*b);
            break;

        case 4:
            printf("Masukkan a: ");
            scanf("%f", &a);
            printf("Masukkan b: ");
            scanf("%f", &b);
            printf("Hasil pembagian nya yaitu : %f", a/b);
            break;

        case 5:
            printf("Masukkan a: ");
            scanf("%f", &a);
            printf("Masukkan b: ");
            scanf("%f", &b);
            printf("Hasil perpangkatan nya yaitu : %f", pow(a,b));
            break;

        case 6:
            printf("Bentuk umum (ax^2) + (bx) + (c) \n");
            printf("Masukkan nilai a : ");
            scanf("%f", &a);
            printf("Masukkan nilai b : ");
            scanf("%f", &b);
            printf("Masukkan nilai c : ");
            scanf("%f", &c);
            printf("Masukkan batas bawah: ");
            scanf("%f", &bawah);
            printf("Masukkan batas atas: ");
            scanf("%f", &atas);
            printf("Masukkan jumlah suku: ");
            scanf("%f", &n);
            h = (atas-bawah)/n;
            y0 = fungsi(a,b,c,bawah+0*h);
            yn = fungsi(a,b,c,bawah+n*h);
            for (i=1; i<n; i++) sum1=sum1 + fungsi(a,b,c,bawah+i*h);
            sum = (h/2)*(y0 + yn + 2*sum1);
            printf("Hasilnya integral nya yaitu : %f", sum);
            break;
    }
    return 0;
}
