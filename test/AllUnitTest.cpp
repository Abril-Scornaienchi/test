#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <Client.h>
#include <Item.h>
#include <Order.h>
#include <iostream>
#include <memory>
#include <catch.h>

using namespace std;
 
TEST_CASE( "Correct getData from All test's" )
{
    // Arrange
    auto client_1 = make_shared<Client>("Carl");
    auto item_1 = make_shared<Item>("Fragrance", 19.99);
    auto order_1 = make_shared<Order>(1);
    
    // Act
    string clientName = client_1 -> getName();
    string itemName = item_1 -> getName();
    int order_client = order_1 -> getId();
    
    // Assert
    REQUIRE( clientName == "Carl" );
    REQUIRE( itemName == "Fragrance" );
    REQUIRE( order_client == 1 );
}