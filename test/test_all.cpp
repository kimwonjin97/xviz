/*
 * File: test_all.cpp
 * Author: Minjun Xu (mjxu96@gmail.com)
 * File Created: Monday, 10th February 2020 10:53:23 am
 */

#include <gtest/gtest.h>
#include "test_metadata.h"

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}