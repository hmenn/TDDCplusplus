#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Basket.hpp"
#include "User.hpp"
#include "BasketRepository.hpp"
#include "BasketService.hpp"

using ::testing::NiceMock;
using ::testing::Return;

TEST(it_should_save_basket, Criteria3)
{
    int basketID = 100;
    User user(1, "Hasan", "Men");
    BasketRepositoryMock bMock;

    Basket basket(basketID, user);
    EXPECT_CALL(bMock, saveBasket(&basket)).Times(1);
    EXPECT_CALL(bMock, getBasketByUser(&user)).Times(1).WillOnce(Return(&basket));

    int productID = 1;
    BasketService bs(bMock);
    bs.add(&user, productID, 3);

    BasketItem item = basket.get(productID);

    EXPECT_EQ(item.getProductID(), productID);
    EXPECT_EQ(item.getQuantity(), 3);
}

TEST(it_should_save_existing_basket, Criteria3)
{
    int basketID = 1;
    int productID = 1;
    User user(1, "Hasan", "Men");
    BasketRepositoryMock bMock;

    Basket basket(basketID, user);
    basket.add(productID, 2);

    EXPECT_CALL(bMock, saveBasket(&basket))
        .Times(1);
    EXPECT_CALL(bMock, getBasketByUser(&user)).WillOnce(Return(&basket));

    BasketService bs(bMock);
    bs.add(&user, productID, 3);

    BasketItem item = basket.get(productID);

    EXPECT_EQ(item.getProductID(), productID);
    EXPECT_EQ(item.getQuantity(), 5);
}
