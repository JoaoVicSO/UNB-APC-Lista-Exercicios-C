#include<stdio.h>
#include<string.h>

struct godfor {

    char nome[101]; 
    int power, kills, mortes;
    
};

typedef struct godfor Godfor;

void godofwar(Godfor v[100], int n){

    int i,j;
    Godfor aux;

    for(i = 0; i < n - 1; i++) {
    
        for(j = i + 1; j < n; j++) {

            if(v[i].power < v[j].power) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                
            } else {
            
                if(v[i].power == v[j].power) {
                    if(v[i].kills < v[j].kills){

                        aux = v[i];
                        v[i] = v[j];
                        v[j] = aux;
                        
                    } else { 
                    
                        if(v[i].kills == v[j].kills) {
                            if(v[i].mortes > v[j].mortes) {  
                                aux = v[i];
                                v[i] = v[j];
                                v[j] = aux;
                                
                            } else {
                            
                                if(v[i].mortes == v[j].mortes){
                                    if(strcmp(v[i].nome,v[j].nome) > 0) {
                                        aux = v[i];
                                        v[i] = v[j];
                                        v[j] = aux;
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}


int main() {

int i,n;
Godfor godfor[100];

    scanf ("%d",&n);
    
    for(i = 0; i < n; i++){
        
        scanf("%s",godfor[i].nome);
        scanf("%d",&godfor[i].power);
        scanf("%d",&godfor[i].kills);
        scanf("%d",&godfor[i].mortes);
        
    }
    
    godofwar(godfor, n);   

    printf("%s\n", godfor[0].nome);   
    
    
    return 0;
}