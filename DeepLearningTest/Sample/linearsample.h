/*
 创建人：神数不神
 创建日期：2024-10-3
*/
#pragma once
#include <vector>
#include <tuple>
#include <Eigen/Dense>
#include "../Model/parameter.h"
#include "../define.h"
namespace Dtrain {
	using namespace Dtrain::Core;
	class DTRAIN_API LinearSample {
	public:
		static LinearModelParameter GetLinearSample(int sampleSize, const LinearModelRandomRange& randomRange,
			std::vector<Eigen::VectorXd>& features, std::vector<double>& labels);
		//count x1 x2 y2

	private:

	};
}