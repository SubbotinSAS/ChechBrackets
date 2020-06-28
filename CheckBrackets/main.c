#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

void all(char file1[80]){
    FILE *fp1;
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    int r = 0;
    char poop[50];
    char str[50];
    fgets(str,80,fp1);
    int m = strlen(str);
    for(int i=0; i<m; i++){
        if(str[i]=='('){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==')'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='['){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==']'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='{'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='}'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
    }
    int q = 0;
	int w = 0;
	int s = 0;
	int z = 0;
	int x = 0;
	int c = 0;
    int d = strlen(poop);
    int t = 0;
    for(int y=0; y<=d; y++){
        if((poop[y]=='(') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='(') &&(poop[y+1]==']'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==']'))
                t++;
        if(poop[d]=='(')
                t++;
        if(poop[d]=='[')
                t++;
        if(poop[d]=='{')
                t++;
		if(poop[0]==')')
                t++;
		if(poop[0]==']')
                t++;
		if(poop[0]=='}')
                t++;
    }
    for(int p=0; p<=d; p++){
        if(poop[p]=='(')
                q++;
        if(poop[p]==')')
                w++;
        if(poop[p]=='[')
                s++;
        if(poop[p]==']')
                z++;
        if(poop[p]=='{')
                x++;
        if(poop[p]=='}')
                c++;
    }
    if(t==0 && q==w && s==z && x==c)
        printf("\nVerno");
    else printf("\nNeverno");
}

void rs(char file1[80]){
    FILE *fp1;
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    int r = 0;
    char poop[50];
    char str[50];
    fgets(str,80,fp1);
    int m = strlen(str);
    for(int i=0; i<m; i++){
        if(str[i]=='('){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==')'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='['){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==']'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
    }
    int q = 0;
	int w = 0;
	int s = 0;
	int z = 0;
	int x = 0;
	int c = 0;
    int d = strlen(poop);
    int t = 0;
    for(int y=0; y<=d; y++){
        if((poop[y]=='(') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='(') &&(poop[y+1]==']'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==']'))
                t++;
        if(poop[d]=='(')
                t++;
        if(poop[d]=='[')
                t++;
        if(poop[d]=='{')
                t++;
		if(poop[0]==')')
                t++;
		if(poop[0]==']')
                t++;
		if(poop[0]=='}')
                t++;
    }
    for(int p=0; p<=d; p++){
        if(poop[p]=='(')
                q++;
        if(poop[p]==')')
                w++;
        if(poop[p]=='[')
                s++;
        if(poop[p]==']')
                z++;
        if(poop[p]=='{')
                x++;
        if(poop[p]=='}')
                c++;
    }
    if(t==0 && q==w && s==z && x==c)
        printf("\nVerno");
    else printf("\nNeverno");
}

void rf(char file1[80]){
    FILE *fp1;
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    int r = 0;
    char poop[50];
    char str[50];
    fgets(str,80,fp1);
    int m = strlen(str);
    for(int i=0; i<m; i++){
        if(str[i]=='('){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==')'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='{'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='}'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
    }
    int q = 0;
	int w = 0;
	int s = 0;
	int z = 0;
	int x = 0;
	int c = 0;
    int d = strlen(poop);
    int t = 0;
    for(int y=0; y<=d; y++){
        if((poop[y]=='(') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='(') &&(poop[y+1]==']'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==']'))
                t++;
        if(poop[d]=='(')
                t++;
        if(poop[d]=='[')
                t++;
        if(poop[d]=='{')
                t++;
		if(poop[0]==')')
                t++;
		if(poop[0]==']')
                t++;
		if(poop[0]=='}')
                t++;
    }
    for(int p=0; p<=d; p++){
        if(poop[p]=='(')
                q++;
        if(poop[p]==')')
                w++;
        if(poop[p]=='[')
                s++;
        if(poop[p]==']')
                z++;
        if(poop[p]=='{')
                x++;
        if(poop[p]=='}')
                c++;
    }
    if(t==0 && q==w && s==z && x==c)
        printf("\nVerno");
    else printf("\nNeverno");
}

void sf(char file1[80]){
    FILE *fp1;
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    int r = 0;
    char poop[50];
    char str[50];
    fgets(str,80,fp1);
    int m = strlen(str);
    for(int i=0; i<m; i++){
        if(str[i]=='['){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==']'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='{'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='}'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
    }
    int q = 0;
	int w = 0;
	int s = 0;
	int z = 0;
	int x = 0;
	int c = 0;
    int d = strlen(poop);
    int t = 0;
    for(int y=0; y<=d; y++){
        if((poop[y]=='(') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='(') &&(poop[y+1]==']'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==']'))
                t++;
        if(poop[d]=='(')
                t++;
        if(poop[d]=='[')
                t++;
        if(poop[d]=='{')
                t++;
		if(poop[0]==')')
                t++;
		if(poop[0]==']')
                t++;
		if(poop[0]=='}')
                t++;
    }
    for(int p=0; p<=d; p++){
        if(poop[p]=='(')
                q++;
        if(poop[p]==')')
                w++;
        if(poop[p]=='[')
                s++;
        if(poop[p]==']')
                z++;
        if(poop[p]=='{')
                x++;
        if(poop[p]=='}')
                c++;
    }
    if(t==0 && q==w && s==z && x==c)
        printf("\nVerno");
    else printf("\nNeverno");
}

void simple(char file1[80]){
    FILE *fp1;
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    int r = 0;
    char poop[50];
    char str[50];
    fgets(str,80,fp1);
    int m = strlen(str);
    for(int i=0; i<m; i++){
        if(str[i]=='('){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==')'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
    }
    int q = 0;
	int w = 0;
	int s = 0;
	int z = 0;
	int x = 0;
	int c = 0;
    int d = strlen(poop);
    int t = 0;
    for(int y=0; y<=d; y++){
        if((poop[y]=='(') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='(') &&(poop[y+1]==']'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==']'))
                t++;
        if(poop[d]=='(')
                t++;
        if(poop[d]=='[')
                t++;
        if(poop[d]=='{')
                t++;
		if(poop[0]==')')
                t++;
		if(poop[0]==']')
                t++;
		if(poop[0]=='}')
                t++;
    }
    for(int p=0; p<=d; p++){
        if(poop[p]=='(')
                q++;
        if(poop[p]==')')
                w++;
        if(poop[p]=='[')
                s++;
        if(poop[p]==']')
                z++;
        if(poop[p]=='{')
                x++;
        if(poop[p]=='}')
                c++;
    }
    if(t==0 && q==w && s==z && x==c)
        printf("\nVerno");
    else printf("\nNeverno");
}

void simple1(char file1[80]){
    FILE *fp1;
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    int r = 0;
    char poop[50];
    char str[50];
    fgets(str,80,fp1);
    int m = strlen(str);
    for(int i=0; i<m; i++){
        if(str[i]=='['){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]==']'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
    }
    int q = 0;
	int w = 0;
	int s = 0;
	int z = 0;
	int x = 0;
	int c = 0;
    int d = strlen(poop);
    int t = 0;
    for(int y=0; y<=d; y++){
        if((poop[y]=='(') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='(') &&(poop[y+1]==']'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==']'))
                t++;
        if(poop[d]=='(')
                t++;
        if(poop[d]=='[')
                t++;
        if(poop[d]=='{')
                t++;
		if(poop[0]==')')
                t++;
		if(poop[0]==']')
                t++;
		if(poop[0]=='}')
                t++;
    }
    for(int p=0; p<=d; p++){
        if(poop[p]=='(')
                q++;
        if(poop[p]==')')
                w++;
        if(poop[p]=='[')
                s++;
        if(poop[p]==']')
                z++;
        if(poop[p]=='{')
                x++;
        if(poop[p]=='}')
                c++;
    }
    if(t==0 && q==w && s==z && x==c)
        printf("\nVerno");
    else printf("\nNeverno");
}

void simple2(char file1[80]){
    FILE *fp1;
    fp1 = fopen(file1, "r");
    if(fp1==NULL)
        printf("Error:File1\n");
    else printf("File1 is opened\n");
    int r = 0;
    char poop[50];
    char str[81];
    fgets(str,80,fp1);
    int m = strlen(str);
    for(int i=0; i<m; i++){
        if(str[i]=='{'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
        else if(str[i]=='}'){
            printf("%c",str[i]);
            poop[r] = str[i];
            r++;
        }
    }
    int q = 0;
	int w = 0;
	int s = 0;
	int z = 0;
	int x = 0;
	int c = 0;
    int d = strlen(poop);
    int t = 0;
    for(int y=0; y<=d; y++){
        if((poop[y]=='(') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='(') &&(poop[y+1]==']'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]=='}'))
                t++;
        if((poop[y]=='[') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==')'))
                t++;
        if((poop[y]=='{') &&(poop[y+1]==']'))
                t++;
        if(poop[d]=='(')
                t++;
        if(poop[d]=='[')
                t++;
        if(poop[d]=='{')
                t++;
		if(poop[0]==')')
                t++;
		if(poop[0]==']')
                t++;
		if(poop[0]=='}')
                t++;
    }
    for(int p=0; p<=d; p++){
        if(poop[p]=='(')
                q++;
        if(poop[p]==')')
                w++;
        if(poop[p]=='[')
                s++;
        if(poop[p]==']')
                z++;
        if(poop[p]=='{')
                x++;
        if(poop[p]=='}')
                c++;
    }
    if(t==0 && q==w && s==z && x==c)
        printf("\nVerno");
    else printf("\nNeverno");
}


int main(int argc, char *argv[])
{
    char rew[6] = {'-','h','e','l','p'};
    char req[3] = {'(',')'};
    char ret[3] = {'[',']'};
    char reu[3] = {'{','}'};
    char qew[5] = {'(',')','[',']'};
    char tew[5] = {'(',')','{','}'};
    char uew[5] = {'[',']','{','}'};
    char qtu[7] = {'(',')','[',']','{','}'};
    if(strcmpi(argv[1],rew)==0){
        printf("CheckBrackets.exe file1.txt ()[]{} - brackets from this file1 will be checked\n()[()]{()()[]} - right\n[(]{}) - wrong\n() - only rounds will be checked\n[] - only square will be checked\n{} - only curly ones will be checked\n()[] - rounds and square\n(){} - rounds and curly\n[]{} - square and curly\n()[]{} - all brackets will be checked");
        return 0;}
    if(strcmpi(argv[2],req)==0)
        simple(argv[1]);
    else if(strcmpi(argv[2],ret)==0)
        simple1(argv[1]);
    else if(strcmpi(argv[2],reu)==0)
        simple2(argv[1]);
    else if(strcmpi(argv[2],qew)==0)
        rs(argv[1]);
    else if(strcmpi(argv[2],tew)==0)
        rf(argv[1]);
    else if(strcmpi(argv[2],uew)==0)
        sf(argv[1]);
    else if(strcmpi(argv[2],qtu)==0)
        all(argv[1]);
    return 0;
}
