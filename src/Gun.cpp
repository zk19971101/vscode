#include"Gun.h"
#include<iostream>

void Gun::addBullet(int bullet_num)
{
    this->_bullet_count += 1;
}

bool Gun::shoot()
{
    if (this->_bullet_count<=0)
    {
        std::cout<<"this is no bullet!";
        return false;
    }
    this->_bullet_count -= 1;
    std::cout<<"fire success!"<<endl;
    return true;
}