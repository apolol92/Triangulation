#include "gtest/gtest.h"
#include "Point.h"
#include <vector>

TEST(testPoint, testPointDistance2D)
{
	Point p1(std::vector<double>{1, 2});
	Point p2(std::vector<double>{3, 5});
	EXPECT_NEAR(3.60555, p1.dist(p2), 0.05);
}

TEST(testPoint, testPointDistance3D)
{
	Point p1(std::vector<double>{1, 2, 5});
	Point p2(std::vector<double>{3, 5, 8});
	EXPECT_NEAR(4.69, p1.dist(p2), 0.05);
}



int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::cin.get();
	return 0;
}