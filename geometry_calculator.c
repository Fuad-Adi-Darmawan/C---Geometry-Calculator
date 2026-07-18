#include <stdio.h>
#include <math.h>

int main() 
{
    int pilih, pilihan;
    double hasil, sisi, panjang, lebar, jarijari;

    printf("Program Menghitung Luas Bangun Datar\n");
    printf("========================================\n");
    printf("Silakan pilih bangun datar yang ingin dihitung:\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    
    printf("Pilih Bangun Datar : ");
    scanf("%d", &pilih);

    switch (pilih)
     {
        case 1:
            printf("\nMenghitung Luas dan Keliling Persegi\n");
            printf("========================================\n");
            printf("Pilih:\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan: ");
            scanf("%d", &pilihan);

            if (pilihan == 1) 
            {
                printf("\nMasukkan sisi persegi: ");
                scanf("%lf", &sisi); 
                hasil = sisi * sisi;
                printf("\nLuas Persegi: %.2lf\n", hasil);
            } else if (pilihan == 2) 
            {
                printf("\nMasukkan sisi persegi: ");
                scanf("%lf", &sisi);
                hasil = 4 * sisi;
                printf("\nKeliling Persegi: %.2lf\n", hasil);
            } else {
                printf("\nSalah input! \n");
            }
            break;

        case 2:
            printf("\nMenghitung Luas dan Keliling Persegi Panjang\n");
            printf("========================================\n");
            printf("Pilih:\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan: ");
            scanf("%d", &pilihan);

            if (pilihan == 1) 
            {
                printf("\nInput panjang: ");
                scanf("%lf", &panjang);
                printf("\nInput lebar: ");
                scanf("%lf", &lebar);
                hasil = panjang * lebar;
                printf("\nLuas Persegi Panjang: %.2lf\n", hasil);
            } else if (pilihan == 2) 
            {
                printf("\nInput panjang: ");
                scanf("%lf", &panjang);
                printf("\nInput lebar: ");
                scanf("%lf", &lebar);
                hasil = 2 * (panjang + lebar);
                printf("\nKeliling Persegi Panjang: %.2lf\n", hasil);
            } else {
                printf("\nSalah input! \n");
            }
            break;

        case 3:
            printf("\nMenghitung Luas dan Keliling Lingkaran\n");
            printf("========================================\n");
            printf("Pilih:\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan: ");
            scanf("%d", &pilihan);

            if (pilihan == 1) 
            {
                printf("\nInput jari-jari lingkaran: ");
                scanf("%lf", &jarijari);
                hasil = M_PI * pow(jarijari, 2);
                printf("\nLuas Lingkaran: %.2lf\n", hasil);
            } else if (pilihan == 2) {
                printf("\nInput jari-jari lingkaran: ");
                scanf("%lf", &jarijari);
                hasil = 2 * M_PI * jarijari; 
                printf("\nKeliling Lingkaran: %.2lf\n", hasil);
            } else {
                printf("Salah input\n");
            }
            break;

        default:
            printf("Pilihan salah! Silakan coba lagi.\n");
            break;
    }

    printf("========================================\n");
    printf("By : Fuad adi darmawan\n");
    
    return 0;
}
