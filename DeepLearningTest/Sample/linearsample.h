/*
 �����ˣ���������
 �������ڣ�2024-10-3
*/
#pragma once
#include <vector>
#include <tuple>
#include <glm/glm.hpp>
#include "../Model/parameter.h"
#include "../define.h"
namespace Dtrain {
	using namespace Dtrain::Core;
	class DTRAIN_API LinearSample {
	public:
		static LinearModelParameter GetLinearSample(int sampleSize, const LinearModelRandomRange& randomRange,
			std::vector<glm::dvec2>& features, std::vector<double>& labels);
		//count x1 x2 y2

	private:

	};
}