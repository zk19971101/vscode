#include "Soldier.h"
#include "Gun.h"
#include<iostream>


int main()
{
    std::cout<<"this is a test string"<<std::endl;
    Soldier xusanduo("许三多");
    xusanduo.addGun(new Gun("ak47"));
    xusanduo.addBulletToGun(20);
    xusanduo.fire();

    return 0;
}