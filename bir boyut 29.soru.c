#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    char enuz_kelime[50];
    char enks_kelime[50];
    char kelime[50];
    int i, j, enuz_kelime_uz, enks_kelime_uz;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    enuz_kelime_uz = 0;
    enks_kelime_uz= 1000;
    for (i = 0; i < strlen(cumle); i++)
    {
        j = 0;
        while (cumle[i] != ' ' && i < strlen(cumle))
        {
            kelime[j] = cumle[i];
            j++;
            i++;
        }
        kelime[j] = '\0';

        // Kelimenin uzunlugunu karsilastir
        if (j > enuz_kelime_uz)
        {
            enuz_kelime_uz = j;
            strcpy(enuz_kelime, kelime);
        }
        else if (j < enks_kelime_uz)
        {
            enks_kelime_uz = j;
            strcpy(enks_kelime, kelime);
        }
    }

    printf("En uzun kelime: %s\n", enuz_kelime);
    printf("En kisa kelime: %s\n", enks_kelime);
    printf("Kelimeler arasindaki karakter farki: %d\n", enuz_kelime_uz-enks_kelime_uz);
    
    
    return 0;
    
}
