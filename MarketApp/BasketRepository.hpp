#ifndef BASKET_REPOSITORY_HPP
#define BASKET_REPOSITORY_HPP

#include <gmock/gmock.h>
#include "Basket.hpp"

class IBasketRepo
{
public:
  virtual void saveBasket(Basket *basket) = 0;
  virtual Basket *getBasketByUser(User *user) = 0;
};

class BasketRepositoryMock : public IBasketRepo
{
public:
  //void saveBasket(Basket basket) {}
  //Basket getBasket() {}
  MOCK_METHOD1(saveBasket, void(Basket *basket));
  MOCK_METHOD1(getBasketByUser, Basket *(User *user));
};

#endif /* BASKET_REPOSITORY_HPP */