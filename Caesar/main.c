#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void encrypt(int k, char file1[80], char file2[80]){
    FILE *fp1, *fp2;
    char cr[80];
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    fp2 = fopen(file2, "w");
    if(fp2==NULL)
        printf("Error:File2\n");
    else printf("File2 is opened\n");
    fgets(cr,80,fp1);
    char q[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char w[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int m = strlen(cr);
    if(k>26){
        printf("Key must be k<=26\n");
        return 0;
    }
    else for(int i=0;i<m;i++){
        if(cr[i]==q[0])
            cr[i]=q[0+k];
        else if(cr[i]==q[1])
            cr[i]=q[1+k];
        else if(cr[i]==q[2])
            cr[i]=q[2+k];
        else if(cr[i]==q[3])
            cr[i]=q[3+k];
        else if(cr[i]==q[4])
            cr[i]=q[4+k];
        else if(cr[i]==q[5])
            cr[i]=q[5+k];
        else if(cr[i]==q[6])
            cr[i]=q[6+k];
        else if(cr[i]==q[7])
            cr[i]=q[7+k];
        else if(cr[i]==q[8])
            cr[i]=q[8+k];
        else if(cr[i]==q[9])
            cr[i]=q[9+k];
        else if(cr[i]==q[10])
            cr[i]=q[10+k];
        else if(cr[i]==q[11])
            cr[i]=q[11+k];
        else if(cr[i]==q[12])
            cr[i]=q[12+k];
        else if(cr[i]==q[13])
            cr[i]=q[13+k];
        else if(cr[i]==q[14])
            cr[i]=q[14+k];
        else if(cr[i]==q[15])
            cr[i]=q[15+k];
        else if(cr[i]==q[16])
            cr[i]=q[16+k];
        else if(cr[i]==q[17])
            cr[i]=q[17+k];
        else if(cr[i]==q[18])
            cr[i]=q[18+k];
        else if(cr[i]==q[19])
            cr[i]=q[19+k];
        else if(cr[i]==q[20])
            cr[i]=q[20+k];
        else if(cr[i]==q[21])
            cr[i]=q[21+k];
        else if(cr[i]==q[22])
            cr[i]=q[22+k];
        else if(cr[i]==q[23])
            cr[i]=q[23+k];
        else if(cr[i]==q[24])
            cr[i]=q[24+k];
        else if(cr[i]==q[25])
            cr[i]=q[25+k];
        else if(cr[i]==w[0])
            cr[i]=w[0+k];
        else if(cr[i]==w[1])
            cr[i]=w[1+k];
        else if(cr[i]==w[2])
            cr[i]=w[2+k];
        else if(cr[i]==w[3])
            cr[i]=w[3+k];
        else if(cr[i]==w[4])
            cr[i]=w[4+k];
        else if(cr[i]==w[5])
            cr[i]=w[5+k];
        else if(cr[i]==w[6])
            cr[i]=w[6+k];
        else if(cr[i]==w[7])
            cr[i]=w[7+k];
        else if(cr[i]==w[8])
            cr[i]=w[8+k];
        else if(cr[i]==w[9])
            cr[i]=w[9+k];
        else if(cr[i]==w[10])
            cr[i]=w[10+k];
        else if(cr[i]==w[11])
            cr[i]=w[11+k];
        else if(cr[i]==w[12])
            cr[i]=w[12+k];
        else if(cr[i]==w[13])
            cr[i]=w[13+k];
        else if(cr[i]==w[14])
            cr[i]=w[14+k];
        else if(cr[i]==w[15])
            cr[i]=w[15+k];
        else if(cr[i]==w[16])
            cr[i]=w[16+k];
        else if(cr[i]==w[17])
            cr[i]=w[17+k];
        else if(cr[i]==w[18])
            cr[i]=w[18+k];
        else if(cr[i]==w[19])
            cr[i]=w[19+k];
        else if(cr[i]==w[20])
            cr[i]=w[20+k];
        else if(cr[i]==w[21])
            cr[i]=w[21+k];
        else if(cr[i]==w[22])
            cr[i]=w[22+k];
        else if(cr[i]==w[23])
            cr[i]=w[23+k];
        else if(cr[i]==w[24])
            cr[i]=w[24+k];
        else if(cr[i]==w[25])
            cr[i]=w[25+k];
    }
    fputs(cr,fp2);
    fclose(fp1);
    fclose(fp2);
}
void decrypt(int k, char file1[80], char file2[80]){
    FILE *fp1, *fp2;
    char cr[80];
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    fp2 = fopen(file2, "w");
    if(fp2==NULL)
        printf("Error:File2\n");
    else printf("File2 is opened\n");
    fgets(cr,80,fp1);
    char q[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char w[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int m = strlen(cr);
    if(k>26){
        printf("Key must be k<=26\n");
        return 0;
    }
    else for(int i=0;i<m;i++){
        if(cr[i]==q[0])
            cr[i]=q[0+26-k];
        else if(cr[i]==q[1])
            cr[i]=q[1+26-k];
        else if(cr[i]==q[2])
            cr[i]=q[2+26-k];
        else if(cr[i]==q[3])
            cr[i]=q[3+26-k];
        else if(cr[i]==q[4])
            cr[i]=q[4+26-k];
        else if(cr[i]==q[5])
            cr[i]=q[5+26-k];
        else if(cr[i]==q[6])
            cr[i]=q[6+26-k];
        else if(cr[i]==q[7])
            cr[i]=q[7+26-k];
        else if(cr[i]==q[8])
            cr[i]=q[8+26-k];
        else if(cr[i]==q[9])
            cr[i]=q[9+26-k];
        else if(cr[i]==q[10])
            cr[i]=q[10+26-k];
        else if(cr[i]==q[11])
            cr[i]=q[11+26-k];
        else if(cr[i]==q[12])
            cr[i]=q[12+26-k];
        else if(cr[i]==q[13])
            cr[i]=q[13+26-k];
        else if(cr[i]==q[14])
            cr[i]=q[14+26-k];
        else if(cr[i]==q[15])
            cr[i]=q[15+26-k];
        else if(cr[i]==q[16])
            cr[i]=q[16+26-k];
        else if(cr[i]==q[17])
            cr[i]=q[17+26-k];
        else if(cr[i]==q[18])
            cr[i]=q[18+26-k];
        else if(cr[i]==q[19])
            cr[i]=q[19+26-k];
        else if(cr[i]==q[20])
            cr[i]=q[20+26-k];
        else if(cr[i]==q[21])
            cr[i]=q[21+26-k];
        else if(cr[i]==q[22])
            cr[i]=q[22+26-k];
        else if(cr[i]==q[23])
            cr[i]=q[23+26-k];
        else if(cr[i]==q[24])
            cr[i]=q[24+26-k];
        else if(cr[i]==q[25])
            cr[i]=q[25+26-k];
        else if(cr[i]==w[0])
            cr[i]=w[0+26-k];
        else if(cr[i]==w[1])
            cr[i]=w[1+26-k];
        else if(cr[i]==w[2])
            cr[i]=w[2+26-k];
        else if(cr[i]==w[3])
            cr[i]=w[3+26-k];
        else if(cr[i]==w[4])
            cr[i]=w[4+26-k];
        else if(cr[i]==w[5])
            cr[i]=w[5+26-k];
        else if(cr[i]==w[6])
            cr[i]=w[6+26-k];
        else if(cr[i]==w[7])
            cr[i]=w[7+26-k];
        else if(cr[i]==w[8])
            cr[i]=w[8+26-k];
        else if(cr[i]==w[9])
            cr[i]=w[9+26-k];
        else if(cr[i]==w[10])
            cr[i]=w[10+26-k];
        else if(cr[i]==w[11])
            cr[i]=w[11+26-k];
        else if(cr[i]==w[12])
            cr[i]=w[12+26-k];
        else if(cr[i]==w[13])
            cr[i]=w[13+26-k];
        else if(cr[i]==w[14])
            cr[i]=w[14+26-k];
        else if(cr[i]==w[15])
            cr[i]=w[15+26-k];
        else if(cr[i]==w[16])
            cr[i]=w[16+26-k];
        else if(cr[i]==w[17])
            cr[i]=w[17+26-k];
        else if(cr[i]==w[18])
            cr[i]=w[18+26-k];
        else if(cr[i]==w[19])
            cr[i]=w[19+26-k];
        else if(cr[i]==w[20])
            cr[i]=w[20+26-k];
        else if(cr[i]==w[21])
            cr[i]=w[21+26-k];
        else if(cr[i]==w[22])
            cr[i]=w[22+26-k];
        else if(cr[i]==w[23])
            cr[i]=w[23+26-k];
        else if(cr[i]==w[24])
            cr[i]=w[24+26-k];
        else if(cr[i]==w[25])
            cr[i]=w[25+26-k];
    }
    fputs(cr,fp2);
    fclose(fp1);
    fclose(fp2);
}
int main(int argc,char *argv[])
{
    char rew[8];
    rew[0] = '-';
    rew[1] = 'e';
    rew[2] = 'n';
    rew[3] = 'c';
    rew[4] = 'o';
    rew[5] = 'd';
    rew[6] = 'e';
    char reww[8];
    reww[0] = '-';
    reww[1] = 'd';
    reww[2] = 'e';
    reww[3] = 'c';
    reww[4] = 'o';
    reww[5] = 'd';
    reww[6] = 'e';
    char rewww[6];
    rewww[0] = '-';
    rewww[1] = 'h';
    rewww[2] = 'e';
    rewww[3] = 'l';
    rewww[4] = 'p';
    int k = atoi(argv[2]);
    if(strcmpi(argv[1],rew)==0)
        encrypt(k, argv[3], argv[4]);
    else if(strcmpi(argv[1], reww)==0)
        decrypt(k, argv[3], argv[4]);
    else if(strcmpi(argv[1],rewww)==0)
        printf("Caesar.exe -encode/-decode 2 file1.txt file2.txt\n-encode/-decode - to encrypt or decrypt\nIn place of 2 - encryption key\nData from a file1 is encrypted or decrypted to a file2");
    return 0;
}
