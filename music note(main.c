#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//¿é¤J||-Si-|


int main(){
    int k=0;
    printf("welcome!!\n");
    printf("++++++++++++++++++++\n");

    FILE *in,*out;
    int i;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");
    printf("Loading.........");
    if(fopen("input.txt","r")==NULL){
    	printf("fail\n");
    	exit(1);
	} 
    else
        printf("loaded\n");


    char word[10],c[10][5]={"Si","La","So","Fa","Me","Re","Do"};



    for(i=0;i<7;i++){
        int i1;
        in=fopen("input.txt","r");
        fprintf(out,"||-%s-|",c[i]);
        while(fscanf(in,"%s",word)!=EOF){
            int n=word[2]-'0';
            char m;




            for(i1=0;i1<n;i1++){
                    k++;

                if(strncmp(word,c[i],2)==0){
                    if(i1==0){
                        fprintf(out,"0");
                    }
                    else
                        fprintf(out,"=");
                }
                else
                    fprintf(out,"-");

            }


        }
        if(strncmp("Fa",c[i],2)==0){
        	fprintf(out,"|Fin||\n");
		}
		else
        	fprintf(out,"|---||\n");
        fclose(in);
    }
    printf("Done!!\n");
    printf("============================\n");
    printf("note: %d\n",k/7);
    printf("============================\n");
    printf("all completed");






}
