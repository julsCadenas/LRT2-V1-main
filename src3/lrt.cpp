#include <iostream>

int main(){

    int singleJourney[13][13]={
        {0,15,20,20,20,25,25,25,25,30,30,35,35},
        {15,0,15,20,20,20,25,25,25,25,30,30,35},
        {20,15,0,15,20,20,20,20,25,25,30,30,30},
        {20,20,15,0,15,20,20,20,20,25,25,30,30},
        {20,20,20,15,0,15,20,20,20,20,25,25,30},
        {25,20,20,20,15,0,15,20,20,20,25,25,30},
        {25,25,20,20,20,15,0,15,20,20,20,25,25},
        {25,25,20,20,20,20,15,0,15,20,20,25,25},
        {25,25,25,20,20,20,20,15,0,15,20,20,25},
        {30,25,25,25,20,20,20,20,15,0,20,20,25},
        {30,30,30,25,25,25,20,20,20,20,0,15,20},
        {35,30,30,30,25,25,25,25,20,20,15,0,20},
        {35,35,30,30,30,30,25,25,25,25,20,20,0}
        }; 

    std::cout<<std::endl;

    std::cout<<"LRT Stations:"<<std::endl;
    std::cout<<"1. Recto\n2. Legarda\n3. Pureza\n4. V. Mapa\n5. J. Ruiz\n6. Gilmore\n7. Betty Go"
             <<"\n8. Cubao\n9. Anonas\n10. Katipunan\n11. Santolan\n12. Marikina\n13. Antipolo"<<std::endl;

    std::cout<<std::endl;
    int destination;
    int position;
    std::cout<<"Enter your position: ";
    std::cin>>position;
    std::cout<<"Enter your destination: ";
    std::cin>>destination;

    int fare=singleJourney[position-1][destination-1];
    std::cout<<"Your single journey fare is: "<<fare<<std::endl;

    std::cout<<std::endl;

    int pay=0;
    int pay2=0;
    int change;

    std::cout<<"Insert payment: ";
    std::cin>>pay;
    while(pay<fare){
        if(pay<fare){
            std::cout<<"Your payment is insufficient."<<std::endl; 
            std::cout<<"Please pay the insufficient amount: "; 
            std::cin>>pay2;
            pay+=pay2;
        }
    }

    std::cout<<"You paid: "<<pay<<std::endl;

    if(pay>fare){
        change=pay-fare;
        std::cout<<"Your change is: "<<change<<std::endl;
    }

    std::cout<<"Thank you! Please come again!"<<std::endl;

    return 0;
}