//
// Created by maor on 10/11/18.
//

#ifndef DISH_H_
#define DISH_H_

#include <string>

enum DishType{
    VEG, SPC, BVG, ALC
};

class Dish{
public:
    Dish();
    Dish(int d_id, std::string d_name, int d_price, DishType d_type);
    int getId() const;
    std::string getName() const;
    int getPrice() const;
    DishType getType() const;
    static DishType convert(const std::string& str);
private:
    const int id;
    const std::string name;
    const int price;
    const DishType type;
};


#endif