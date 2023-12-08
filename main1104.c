#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int fonksecici;
    char kelime[35];
    int a,A,kaydir ;
    //kaydir = kaydirma miktari
	char karakter;

    printf("Sifreleme programina hosgeldiniz \n \n  *Sifreleme yapmak icin 1'e, sifre kirmak icin 2'ye basin \n \n");
    scanf("%d", &fonksecici);
 

    switch (fonksecici) {
        case 1:
           
                 printf("\n \n *Sifrelemek istediginiz kelimeyi bosluk birakmadan yalnizca Ingilizce harflerle giriniz \n \n");
                   scanf("%s", kelime);


                printf (" \n *Kaydirma miktari giriniz. \n");
                    scanf ("%d",&kaydir);
            
                   
        for (a = 0; kelime[a] != '\0'; a++) {
            karakter = kelime[a];

                if (islower(karakter)) {
                    karakter = (karakter - 'a' + kaydir) % 26 + 'a';
                    kelime[a] = karakter;
                } 
				
				
				else if (isupper(karakter)) {
                    karakter = (karakter - 'A' + kaydir) % 26 + 'A';
                    kelime[a] = karakter;
                }
            
			}

           
		    if (sizeof kelime>35) {
                printf("Lutfen 35 harften daha kisa bir kelime giriniz \n");
            } 
			else {
                printf(" \n **Sifrelenmis kelime: %s \n", kelime);
            }
            break;

       
	   
	   
	   
	    case 2:
            
			
		   printf("\n \n *Sifresini kirmak istediginiz kelimeyi bosluk birakmadan sadece harflerle giriniz \n \n");
              scanf("%s", kelime);

           printf (" \n *Sifrelenirken kullanilmis kaydirma miktarini giriniz \n");
              scanf ("%d",&kaydir);	
						
          
			
			for (a = 0; kelime[a] != '\0'; a++) {
                karakter = kelime[a];

                if (islower(karakter)) {
                    karakter = (karakter - 'a' - kaydir) % 26 + 'a';
                    kelime[a] = karakter;
                } 
				
				
				else if (isupper(karakter)) {
                    karakter = (karakter - 'A' - kaydir) % 26 + 'A';
                    kelime[a] = karakter;
                }
            
			}

           
		    if (sizeof kelime>35) {
                printf("Lutfen 35 harften daha kisa bir kelime giriniz! \n");
            } 
			else {
                printf(" \n **Sifresi kirilmis kelime: %s \n", kelime);
            }
            break;
            
					
		

        default:
            printf("\n Lutfen 1 ya da 2 degeri girin! \n");
            break;
    }

    return 0;
}

