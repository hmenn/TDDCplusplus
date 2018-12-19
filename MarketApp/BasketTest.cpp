#include <gtest/gtest.h>
#include "Basket.hpp"

TEST(it_should_add_item_into_basket, Criteria1)
{
    User user(1, "Hasan", "Men");
    Basket basket(3, user);

    int productID = 3;
    int quantity = 1;

    basket.add(productID, quantity);

    BasketItem item = basket.get(productID);

    EXPECT_EQ(item.getProductID(), productID);
    EXPECT_EQ(item.getQuantity(), quantity);
}

TEST(it_should_update_basket, Criteria2)
{
    User user(1, "Hasan", "Men");

    Basket basket(3, user);

    int productID = 3;

    bool status = basket.add(productID, 1);

    basket.add(productID, 5);

    BasketItem item = basket.get(productID);
    EXPECT_EQ(item.getProductID(), productID);
    EXPECT_EQ(item.getQuantity(), 6);
}
