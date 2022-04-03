
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int x=0, y=0, distance=10;
    char c='R';
    
    for(int i=1; i<=n; i++){
        
        switch (c){
            
            case 'R':
            x=x+distance;
            distance=distance+10;
            c='U';
            break;
            
            case 'U':
            y=y+distance;
            distance=distance+10;
            c='L';
            break;
            
            case 'L':
            x=x-distance;
            distance=distance+10;
            c='D';
            break;
            
            case 'D':
            y=y-distance;
            distance=distance+10;
            c='A';
            break;
            
            case 'A':
            x=x+distance;
            distance=distance+10;
            c='R';
            break;
        }
    }
    printf("(%d,%d)",x,y);

    return 0;
}
