
#include "dmfix_win_utf8.h"
#include "gtest.h"
#include <iostream>

TEST(ConsoleEncodingTest, CodePageSettings) {
#ifdef _WIN32
    EXPECT_EQ(GetConsoleOutputCP(), 65001);
    EXPECT_EQ(GetConsoleCP(), 65001);
#else
    const char* locale = std::setlocale(LC_ALL, nullptr);
    EXPECT_NE(std::strstr(locale, "utf8"), nullptr);
#endif
}

TEST(ConsoleEncodingTest, SingletonPattern) {
    EXPECT_TRUE(std::is_abstract_v<ConsoleEncoding>);
    EXPECT_TRUE(std::is_copy_constructible_v<ConsoleEncoding> == false);
    EXPECT_TRUE(std::is_move_constructible_v<ConsoleEncoding> == false);
}

TEST(ConsoleEncodingTest, cout) {

    std::cout << "中文测试" << std::endl;
}
