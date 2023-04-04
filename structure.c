#include<stdio.h>
struct car {
    char *name;
    int seats;
    float price;
};
int main(){
    struct car mycar;
    mycar.name = "Ford";
    mycar.price = 5000000;
    mycar.seats = 2;
    printf("%s %f %d",mycar.name,mycar.price,mycar.seats);
    
    return 0;
}



