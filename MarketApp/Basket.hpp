#ifndef BASKET_HPP
#define BASKET_HPP

#include <map>
#include "BasketItem.hpp"
#include "User.hpp"

class Basket
{
  public:
    Basket(int ID, User &user) : mUser(user)
    {
        mID = ID;
    }

    bool add(int productID, int quantity)
    {
        auto it = mBasketItems.find(productID);
        if (it != mBasketItems.end())
        {
            int oldQuantity = it->second.getQuantity();
            it->second.setQuantity(oldQuantity + quantity);
        }
        else
        {
            mBasketItems.emplace(std::make_pair(productID, BasketItem(0, mID, productID, quantity)));
        }
        return true;
    }

    BasketItem &get(int productID)
    {
        return mBasketItems.at(productID);
    }

  private:
    int mID;
    User &mUser;

    std::map<int, BasketItem> mBasketItems;
};

#endif /* BASKET_HPP */