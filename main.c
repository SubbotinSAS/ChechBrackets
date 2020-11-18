#include <stdio.h>
#include <stdlib.h>

//void pri(int n){
    //for (int y=0;y<n+1;y++){
        //printf("| %d |",y);
   // }
//}

int init(int arr[][30],int n){
    FILE *fp1;
    fp1=fopen("DZ2.dot", "w");
    int kk=0;
    int count=0;
    fprintf(fp1,"graph DZ2 {\n");
    for (int ii=0;ii<n;ii++) {
    for (int jj=0;jj<n;jj++) {
    for (int kj=0;kj<arr[ii][jj];kj++) {
            fprintf(fp1,"\t%d -- %d;\n",ii,jj);
            count++;
         if (ii!=jj){
            arr[jj][ii]--;
            }
        }
         if (arr[ii][jj]!=0) {
             kk++;
            }
        }
         if (kk==0) {
            fprintf(fp1,"\t%d;\n",ii);
        }
        kk=0;
    }
    fprintf(fp1,"}");
    fclose(fp1);

    system("dot -Tpng DZ2.dot -oDZ2.png");
    return count;
}



int main(void){
    int arr[30][30];
    int n;
    int coun=0;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    getchar();
    for (int i=0;i<n;i++){
    for (int k=0;k<n;k++){
        arr[i][k] = 0;
        }
    }
    int wer;
    int ver;
    for (int t=0;t<n;t++){
        printf("\nHow many of vertices the vertex %d connects to: ",t);
        scanf("%d",&wer);
        printf("\nWhich vertices the vertex %d connects to: ",t);
    for (int te=0;te<wer;te++){
        scanf("%d",&ver);
        arr[t][ver]=1;
        if (arr[ver][ver]==1)
            coun++;
    }
    }
    //pri(n);
    printf("\n");
    for (int ik=0;ik<n;ik++){
        //printf("| %d |",ik);
    for (int ki=0;ki<n;ki++){
        printf("| %d |",arr[ik][ki]);
        }
        printf("\n");
    }
    int rt=init(arr,n);
    if ((rt>(((n-2)*(n-1))/2)) && (coun==0))
        printf("Connected graph");
    else
        printf("Cannot check this graph");
    return 0;
}
