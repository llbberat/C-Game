#include <stdio.h>
#define m 6
#define n 6

int control(char arr[m][n],int satır,int sütun) {
    if (arr[satır][sütun]==' ') return 1;
    else return 0;


}
int puanhesapla(char arr[m][n], int k, int l, char harf) {
    int puan = 0;

    if (harf == 'S') {
        // 1. SAĞA DOĞRU (S-O-S)
        if (l + 2 < n && arr[k][l+1] == 'O' && arr[k][l+2] == 'S') puan++;

        // 2. SOLA DOĞRU (S-O-S) a
        if (l - 2 >= 0 && arr[k][l-1] == 'O' && arr[k][l-2] == 'S') puan++;

        // 3. AŞAĞI DOĞRU (S-O-S)
        if (k + 2 < m && arr[k+1][l] == 'O' && arr[k+2][l] == 'S') puan++;

        // 4. YUKARI DOĞRU (S-O-S)
        if (k - 2 >= 0 && arr[k-1][l] == 'O' && arr[k-2][l] == 'S') puan++;

        // 5. SAĞ-AŞAĞI ÇAPRAZ
        if (k + 2 < m && l + 2 < n && arr[k+1][l+1] == 'O' && arr[k+2][l+2] == 'S') puan++;

        // 6. SOL-YUKARI ÇAPRAZ
        if (k - 2 >= 0 && l - 2 >= 0 && arr[k-1][l-1] == 'O' && arr[k-2][l-2] == 'S') puan++;
    }
    else if (harf == 'O') {
        // 1. YATAY (S-O-S) - O merkezde
        if (l > 0 && l < n - 1 && arr[k][l-1] == 'S' && arr[k][l+1] == 'S') puan++;

        // 2. DİKEY (S-O-S) - O merkezde
        if (k > 0 && k < m - 1 && arr[k-1][l] == 'S' && arr[k+1][l] == 'S') puan++;

        // 3. ÇAPRAZ 1 (Sol Üst - Sağ Alt)
        if (k > 0 && k < m - 1 && l > 0 && l < n - 1 && arr[k-1][l-1] == 'S' && arr[k+1][l+1] == 'S') puan++;

        // 4. ÇAPRAZ 2 (Sağ Üst - Sol Alt)
        if (k > 0 && k < m - 1 && l > 0 && l < n - 1 && arr[k-1][l+1] == 'S' && arr[k+1][l-1] == 'S') puan++;
    }

    return puan;
}


int çiz(char sosmap[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("|%2c%2s", sosmap[i][j],j==5 ? " | " : "" );


        }printf("\n");
    }
}


int main() {

    char sosmap[m][n],harf,oyuncu1[50],oyuncu2[50];
    int a=0,blok,satır,sütun,puan,puan1=0,puan2=0,sıra=1,hamle=0;
    printf("\nAsagida verilen numaralar o blogun ismidir.\nO bloga s yada o koymak icin numarayi tuslamaniz gerekiyor.\n\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sosmap[i][j]=' ';
            printf("|%c %2d %s", sosmap[i][j],a,j==5 ? " | " : "" );
            a++;

        }printf("\n");
    }

    printf("1.Oyuncu ismini Giriniz: \n");
    scanf("%s",oyuncu1);
    printf("2.Oyuncu ismini Giriniz: \n");
    scanf("%s",oyuncu2);

    while (1) {

        if (sıra==1) printf("Oyun Sirasi %s,Puan:%d \n",oyuncu1,puan1);
        else printf("Oyun Sirasi %s,Puan:%d\n",oyuncu2,puan2);


        printf("\nHangi Blok:");
        scanf("%d",&blok);

        satır=blok/n;
        sütun=blok%n;


        int control1 = control(sosmap,satır,sütun);

        if (control1==1) {
            printf("\nS ya da O tuslayiniz(Caps Acik Olsun):");
            scanf(" %c",&harf);
            sosmap[satır][sütun]=harf;
            hamle++;
            çiz(sosmap);
            puan=puanhesapla(sosmap,satır,sütun,harf);
            if (puan>0) {
                if (sıra==1) {
                    puan1 += puan;
                }else if (sıra==2) {
                    puan2 +=puan;
                }
            }else {
                if (sıra==1) sıra=2;
                else sıra=1;
            }
            if (hamle==m*n) {
                if (puan1>puan2) {
                    printf("\n\n %s Kazandı Puanı : %d ",oyuncu1,puan1);
                    break;
                }
                else if (puan1<puan2) {
                    printf("\n\n %s Kazandı Puanı : %d ",oyuncu2,puan2);
                    break;
                }else {
                    printf("\n\n %s Puanı : %d\n%s Puanı : %d ",oyuncu1,puan1,oyuncu2,puan2);
                    break;
                }
            }


        }else printf("\n Lutfen bos blok giriniz \n");



    }


}
