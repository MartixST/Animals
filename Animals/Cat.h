#pragma once

#include "Animal.h"

class Cat : public Animal {
public:
    void makeSound() const override;
};