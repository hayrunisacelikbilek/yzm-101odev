#include <stdio.h>


int main()
{
    float not_hesabi(float vize, float final);
    float vize, final, ortalama; // degiskenleri tanimladik
    printf("lutfen vize notunuzu giriniz:  ");
    scanf("%f", &vize);  // kullanicidan vize notu alinir
    printf("lutfen final notunuzu giriniz:  ");
    scanf("%f", &final); // kullanicidan final notu alinir

    ortalama = not_hesabi(vize, final); // ortalama hesaplanir ve ortalama değerine göre harf notu belirlenir

    if(ortalama<=100 && ortalama>=90)
    {
        printf("AA ile gectiniz");
    }

    else if(ortalama<90 && ortalama>=85)
    {
        printf("BA ile gectiniz");
    }
    else if(ortalama<85 && ortalama>=80)
    {
        printf("BB ile gectiniz");
    }
    else if(ortalama<80 && ortalama>=70)
    {
        printf("CB ile gectiniz");
    }
    else if(ortalama<70 && ortalama>=60)
    {
        printf("CC ile gectiniz");
    }
    else if(ortalama<60 && ortalama>=50)
    {
        printf("DC ile gectiniz");
    }
    else if(ortalama<50 && ortalama>=40)
    {
        printf("DD ile gectiniz");
    }
    else
    {
        printf("FF ile kaldiniz");

    }
    return 0;
}
float not_hesabi(float vize, float final) // vize ve final notlarının yüzdelik ağırlıklarına göre ortalama hesapladık 
{
    float ortalama;
    ortalama = (vize*0.4) + (final*0.6);
    return ortalama;
}


