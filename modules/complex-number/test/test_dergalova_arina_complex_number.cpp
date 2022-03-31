// Copyright 2022 Dergalova Arina

#include <gtest/gtest.h>

#include "include/complex_number.h"


TEST(Dergalova_Arina_ComplexNumberTest, Sum) {
	double real1 = 4.0;
	double imag1 = 2.0;
	ComplexNumber c1(real1, imag1);

	double real2 = 3.0;
	double imag2 = 2.0;
	ComplexNumber c2(real2, imag2);

	ComplexNumber result = c1 + c2;

	EXPECT_DOUBLE_EQ(7.0, result.getRe());
	EXPECT_DOUBLE_EQ(4.0, result.getIm());
}

TEST(Dergalova_Arina_ComplexNumberTest, Multiply) {
	double real1 = 2.0;
	double imag1 = 2.0;
	ComplexNumber c1(real1, imag1);

	double real2 = 3.0;
	double imag2 = 1.5;
	ComplexNumber c2(real2, imag2);

	ComplexNumber result = c1 * c2;

	EXPECT_DOUBLE_EQ(3.0, result.getRe());
	EXPECT_DOUBLE_EQ(9.0, result.getIm());
}

TEST(Dergalova_Arina_ComplexNumberTest, Divide) {
	double real1 = 2.0;
	double imag1 = 1.0;
	ComplexNumber c1(real1, imag1);

	double real2 = 2.0;
	double imag2 = 1.0;
	ComplexNumber c2(real2, imag2);

	ComplexNumber result = c1 / c2;

	EXPECT_DOUBLE_EQ(1, result.getRe());
	EXPECT_DOUBLE_EQ(0, result.getIm());
}

TEST(Dergalova_Arina_ComplexNumberTest, Subtract) {
	double real1 = 3.0;
	double imag1 = 3.0;
	ComplexNumber c1(real1, imag1);

	double real2 = 4.0;
	double imag2 = 2.5;
	ComplexNumber c2(real2, imag2);

	ComplexNumber result = c1 - c2;

	EXPECT_DOUBLE_EQ(-1.0, result.getRe());
	EXPECT_DOUBLE_EQ(0.5, result.getIm());
}