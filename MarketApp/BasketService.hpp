#ifndef BASKET_SERVICE_HPP
#define BASKET_SERVICE_HPP
#include "BasketRepository.hpp"
#include "User.hpp"
class BasketService
{

  public:
    BasketService(IBasketRepo &repo) : mRepo(repo) {}

    void add(User *user, int productID, int quantity)
    {
        Basket *basket = mRepo.getBasketByUser(user);

        basket->add(productID, quantity);

        mRepo.saveBasket(basket);
    }

  private:
    IBasketRepo &mRepo;
};

#endif