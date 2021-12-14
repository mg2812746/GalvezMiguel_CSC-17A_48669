#include "Deck.h"
//Define all Uno cards to deck
void Deck::define(){
    //Define x of Uno cards
    for(int i=0;i<size;i++){
        //First 25 cards are Green
        if(i<25){
            all[i]="Green";
            i==0?all[i]=ZERO:
            i<=2?all[i]=ONE:
            i<=4?all[i]=TWO:
            i<=6?all[i]=THREE:
            i<=8?all[i]=FOUR:
            i<=10?all[i]=FIVE:
            i<=12?all[i]=SIX:
            i<=14?all[i]=SEVEN:
            i<=16?all[i]=EIGHT:
            i<=18?all[i]=NINE:
            i<=20?all[i]=SKIP:
            i<=22?all[i]=REVERSE:
            all[i]=DRAW;
        //Next 25 are Blue
        }else if(i<50){
            all[i]="Blue";
            i==25?all[i]=ZERO:
            i<=27?all[i]=ONE:
            i<=29?all[i]=TWO:
            i<=31?all[i]=THREE:
            i<=33?all[i]=FOUR:
            i<=35?all[i]=FIVE:
            i<=37?all[i]=SIX:
            i<=39?all[i]=SEVEN:
            i<=41?all[i]=EIGHT:
            i<=43?all[i]=NINE:
            i<=45?all[i]=SKIP:
            i<=47?all[i]=REVERSE:
            all[i]=DRAW;
        //Next 25 are Red
        }else if(i<75){
            all[i]="Red";
            i==50?all[i]=ZERO:
            i<=52?all[i]=ONE:
            i<=54?all[i]=TWO:
            i<=56?all[i]=THREE:
            i<=58?all[i]=FOUR:
            i<=60?all[i]=FIVE:
            i<=62?all[i]=SIX:
            i<=64?all[i]=SEVEN:
            i<=66?all[i]=EIGHT:
            i<=68?all[i]=NINE:
            i<=70?all[i]=SKIP:
            i<=72?all[i]=REVERSE:
            all[i]=DRAW;
        //Next 25 are Yellow
        }else if(i<100){
            all[i]="Yellow";
            i==75?all[i]=ZERO:
            i<=77?all[i]=ONE:
            i<=79?all[i]=TWO:
            i<=81?all[i]=THREE:
            i<=83?all[i]=FOUR:
            i<=85?all[i]=FIVE:
            i<=87?all[i]=SIX:
            i<=89?all[i]=SEVEN:
            i<=91?all[i]=EIGHT:
            i<=93?all[i]=NINE:
            i<=95?all[i]=SKIP:
            i<=97?all[i]=REVERSE:
            all[i]=DRAW;
        //Last 8 are Black wildcards
        }else{
            all[i]="Black";
            i<=103?all[i]=WILD:
            all[i]=DRAWWILD;
        }
    }
}