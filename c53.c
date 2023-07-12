#include <stdio.h>
#include<string.h>
#include<stdlib.h>


void values(int *a,int* b){
	int i,j;
    
    a = (int*)malloc(10*sizeof(int));
    b = (int*)malloc(10*sizeof(int));
    
	for(i=0;i<10;i++){
		printf("\n please give me values for array a \n");
		scanf("%d",&a[i]);
		printf("the value of %d of  a is : %d ",i,a[i]);
	}
	for(j=0;j<10;j++){
		printf(" \n  please give me values for array b \n");
		scanf("%d",&b[j]);
		printf("the value of %d of b is :%d",j,b[j]);
		
	}
		
}

void sortArray(int *a,int *b){
	int i,j,k;
	int maxa=0;
	int maxb=0;
    for(k=0;k<10;k++){
	for(i=0;i<10;i++){
		if(a[i]>a[i+1]){
			maxa=a[i];
			a[i]=a[i+1];
			a[i+1]=maxa;
				
		}
	}
    }
	for(i=0;i<10;i++){
		printf("/n the sorted array a is %d\n",a[i]);
		
	}
    for(k=0;k<10;k++){
    for(j=0;j<10;j++){
		if(b[j]>b[j+1]){
			maxb=b[j];
			b[j]=b[j+1];
			b[j+1]=maxb;
				
		}
	}
    }
	for(j=0;j<10;j++){
		printf("\n the sorted array b is %d\n",b[j]);
		
	}
	
}

void mergeArrays(int* a,int* b,int* c){
	int i,j,max;
    
    for(i=0;i<20;i++){
        if(i<10){
            c[i] = a[i];
        }
        else{
            c[i] = b[i];
        }
    }
    
    /*for(k=0;k<20;k++){
        for(j=0;j<20;j++){
            if(c[j]>c[j+1]){
                maxb=c[j];
                c[j]=c[j+1];
                c[j+1]=maxb;
                
            }
        }
    }*/
    
	
}



int main(){
	int a[10];
	int b[10];
    int c[20];
    int i;
	
	values(a,b);
	sortArray(a,b);
    mergeArrays(a,b,c);
    
    
    for(i=0;i<20;i++){
        printf("%d\n",c[i]);
    }
    
	
	
	return 0;
}


