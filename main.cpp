

#include<stdio.h>
#include<conio.h>
#include<iostream>
//brute force
void prima(),sort(),dynamic();
main(){
            start:
            int x;
            printf ("\n Nama \t: zaky");
            printf ("\n Kelas \t: ");
            printf ("\n NPM \t: 55413344 \n");
            printf ("\n \t \t Algoritma Brute Force \n");
            printf ("\n ===================================================");
            printf ("\n \t 1. Bilangan Prima");
            printf ("\n \t 2. Sorting Bilangan");
            printf ("\n \t 3. Brute force");
             printf ("\n \t 4. Exit");
            printf ("\n ================================================ \n");
            printf ("\n Masukkan Pilihan (1-3) : ");
            scanf ("%d",&x);

            switch(x){
            case 1  : prima();
              goto start;
            case 2  : sort();
              goto start;
            case 3 : dynamic();
              goto start;
                        case 4  : return 0;
              printf("\n \n \n \n \n \n \t \t \t Anda Salah memasukkan Input");
              printf("\n \t \t Program Akan Direstart Setelah Anda Menekan Tombol Enter");
              getch();
              goto start;
            }
}
void prima(){
            int bil,j;
            printf ("\t \t \t Bilangan Prima \n \n \n");
            printf ("Masukkan bilangan yang ingin diinput: ");
            scanf("%d",&bil);
            printf ("\nBilangan prima dari %d adalah \n", bil);
            for(j=2;j<=bil;j++){
            if ((j%2>0)&&(j%3>0)&&(j%5>0)&&(j%7>0) || (j==2)||(j==3)||(j==5)||(j==7))
                        printf ("%i ",j);
            }
            getch();
}
void sort(){
            int i,j,temp,n,bil[100];
            printf ("\t \t \t Sorting Bilangan \n \n \n" );
            printf ("Masukkan jumlah bilangan: ");
            scanf ("%d",&n);
            for(i=0;i<n;i++) {
                        printf ("Bilangan ke-%d \t: ",i+1);
                        scanf ("%d",&bil[i]);
            }
for(i=0;i<n-1;i++){
                        for(j=n-1;j>i;j--){
                        if (bil[i] > bil[j]){
                                    temp = bil[i];
                                    bil[i] = bil[j];
                                                bil[j] = temp;
                                    }
                        }
            }
            printf ("\nHasil sorting adalah: \n");
            for(i=0;i<n;i++){
                        printf ("%d",bil[i]);
                        if (i!= n-1){
                                    printf (", ");
                        }
            }
            getch();
}
void dynamic(){
            int knapSack(int W, int w[], int v[], int n) {
   int i, wt;
   int K[n + 1][W + 1];
   for (i = 0; i <= n; i++) {
      for (wt = 0; wt <= W; wt++) {
         if (i == 0 || wt == 0)
         K[i][wt] = 0;
         else if (w[i - 1] <= wt)
            K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
         else
        K[i][wt] = K[i - 1][wt];
      }
   }
   return K[n][W];
}
int main() {
   cout << "Enter the number of items in a Knapsack:";
   int n, W;
   cin >> n;
   int v[n], w[n];
   for (int i = 0; i < n; i++) {
      cout << "Enter value and weight for item " << i << ":";
      cin >> v[i];
      cin >> w[i];
   }
   cout << "Enter the capacity of knapsack";
   cin >> W;
   cout << knapSack(W, w, v, n);
   return 0;
    }
}
