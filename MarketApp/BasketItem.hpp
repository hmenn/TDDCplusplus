#ifndef BASKET_ITEM_HPP
#define BASKET_ITEM_HPP

#include <map>

class BasketItem
{
  public:
    BasketItem(int ID, int basketID, int productID, int qantity)
    {
        mID = ID;
        mBasketID = basketID;
        mProductID = productID;
        mQuantity = qantity;
    }

    int getID() const
    {
        return mID;
    }

    int getBasketID() const
    {
        return mBasketID;
    }

    int getProductID() const
    {
        return mProductID;
    }

    int getQuantity() const
    {
        return mQuantity;
    }

    void setQuantity(int quantity)
    {
        mQuantity = quantity;
    }

  private:
    int mID;
    int mBasketID;
    int mProductID;
    int mQuantity;
};

#endif /* BASKET_ITEM_HPP */