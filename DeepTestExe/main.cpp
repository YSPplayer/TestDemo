/*
 创建人：神数不神
 创建日期：2024-10-3
*/
#include <Sample/linearsample.h>
#include <glm/glm.hpp>
#include <tuple>
#include <iostream>
using namespace Dtrain;
int main() {
	LinearModelRandomRange range = { {10,1000},{1,50},{2,4},{6,10},{0,1} };
	std::vector<glm::dvec2> features;
	std::vector<double> labels;
	int sampleSize = 10;
	LinearModelParameter s = LinearSample::GetLinearSample(sampleSize, range, features, labels);
	std::cout << "w1:" << s.w1 << std::endl;
	std::cout << "w2:" << s.w2 << std::endl;
	std::cout << "b:" << s.b << std::endl;;
	for (size_t i = 0; i < sampleSize; i++) {
		std::cout << "x1:" << features.at(i).x << std::endl;
		std::cout << "x2:" << features.at(i).y << std::endl;
		std::cout << "y:" << labels.at(i) << std::endl;
		std::cout << "======" << std::endl;
		std::cout << "" << std::endl;
	}
}