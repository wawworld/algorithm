#include <stdio.h>

// 상수 
const char STB = 'a' - 'A';
const char BLANK = ' ';  

int CheackSmallCapital(char input){
    if( 'a' <= input && input <= 'z'){
        return 1;
    }else{
        return 0;
    }
}

char SmallToBig(char input){
    //char output = input - STB;
    return input - STB;
}

void LetterCapitalizer(char input[]){
    
    int i = 0;

  /*
    if(CheackSmallCapital(input[0])){
        input[0] = SmallToBig(input[0]);
    }
    */
    while(input[i]!=NULL){
        if( i==0 || input[i-1]==BLANK ){
            if(CheackSmallCapital(input[i])){
                input[i] = SmallToBig(input[i]);
            }
        }
        i++;
    }
    
    printf("%s\n",input);
    
}

int main(){
    char input[]={"i am a boy"};
    LetterCapitalizer(input);
    return 0;
}