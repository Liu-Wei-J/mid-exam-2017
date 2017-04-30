#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int k=0;
void aa(int i,FILE *in,FILE *out){
		char word[10],c[10][5]={"Si","La","So","Fa","Me","Re","Do"};
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
        	printf(out,"|---||\n");
    	fclose(in);
    	
		if(i<7)
			aa(i+1,in,out);
        
        
} 


int main(){
    
    printf("welcome!!\n");
    printf("++++++++++++++++++++\n");

    FILE *in,*out;
    

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");
    printf("Loading.........");
    if(fopen("input.txt","r")==NULL){
    	printf("fail\n");
    	exit(1);
	} 
    else
        printf("loaded\n");


    aa(0,in,out);



    
    printf("Done!!\n");
    printf("============================\n");
    printf("note: %d\n",k/7);
    printf("============================\n");
    printf("all completed");






}
