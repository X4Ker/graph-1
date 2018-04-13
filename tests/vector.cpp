#include <catch.hpp>
#include <sstream>

#include "vector.hpp"

TEST_CASE("creating queue")
{
	queue_t<int> queue;
	REQUIRE( queue.head() == 0 );
	REQUIRE( queue.tail() == 0 );
}

TEST_CASE("copying queue")
{
	queue_t<int> queue;
	queue_t<int> queue2;
	queue.push(3);
	queue.push(6);
	
	queue2.push(1);
	
	queue2 = queue;
	
	REQUIRE( queue2.headl(queue2.heado()) == 3 );
	REQUIRE( queue2.taill(queue2.tailo()) == 6 );
}

TEST_CASE("pushing elements int")
{
	queue_t <int> queue;

	queue.push(1);
	REQUIRE( queue.head() == 1 );
	REQUIRE( queue.tail() == 1 );

	queue.push(2);
	REQUIRE( queue.head() == 1 );
	REQUIRE( queue.tail() == 2 );

	queue.push(3);
	REQUIRE( queue.head() == 1 );
	REQUIRE( queue.tail() == 3 );
}

TEST_CASE("pushing elements double")
{
	queue_t <double> queue;

	queue.push(1);
	REQUIRE( queue.head() == 1 );
	REQUIRE( queue.tail() == 1 );

	queue.push(2);
	REQUIRE( queue.head() == 1 );
	REQUIRE( queue.tail() == 2 );

	queue.push(3);
	REQUIRE( queue.head() == 1 );
	REQUIRE( queue.tail() == 3 );
}

TEST_CASE("poping elements int")
{
	queue_t <int> queue;

	queue.push(1);
	queue.push(2);
	queue.push(3);
	queue.push(4);

	queue.pop();
	REQUIRE( queue.head() == 2 );
	REQUIRE( queue.tail() == 4 );

	queue.pop();
	REQUIRE( queue.head() == 3 );
	REQUIRE( queue.tail() == 4 );

	queue.pop();
	REQUIRE( queue.head() == 4 );
	REQUIRE( queue.tail() == 4 );
}

TEST_CASE("poping elements double")
{
	queue_t <double> queue;

	queue.push(1);
	queue.push(2);
	queue.push(3);
	queue.push(4);

	queue.pop();
	REQUIRE( queue.head() == 2 );
	REQUIRE( queue.tail() == 4 );

	queue.pop();
	REQUIRE( queue.head() == 3 );
	REQUIRE( queue.tail() == 4 );

	queue.pop();
	REQUIRE( queue.head() == 4 );
	REQUIRE( queue.tail() == 4 );
}
