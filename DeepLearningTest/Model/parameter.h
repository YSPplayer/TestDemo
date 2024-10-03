/*
 �����ˣ���������
 �������ڣ�2024-10-3
*/
#pragma once
#include <tuple>
#include "../define.h"
namespace Dtrain {
	namespace Core {
		/// <summary>
		/// ģ�Ͳ���
		/// </summary>
		struct DTRAIN_API LinearModelParameter {
			double w1;
			double w2;
			double b;
		};
		struct DTRAIN_API LinearModelRandomRange {
			std::tuple<double, double> x1Range;
			std::tuple<double, double> x2Range;
			std::tuple<double, double> w1Range;
			std::tuple<double, double> w2Range;
			std::tuple<double, double> bRange;
		};
	}
}