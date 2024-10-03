/*
 创建人：神数不神
 创建日期：2024-10-3
*/
#pragma once
#include <random>
namespace Dtrain {
	namespace Tool {
		class Util {
		public:
			/// <summary>
			/// 获取随机数，包含最小值，不包含最大值
			/// </summary>
			/// <typeparam name="T"></typeparam>
			/// <param name="min"></param>
			/// <param name="max"></param>
			/// <returns></returns>
			template <typename T>
			static T GetRandomNumber(T min, T max) {
				std::uniform_real_distribution<T> dis(min, max);
				return dis(gen);
			}
		private:
			static std::random_device rd;
			static std::mt19937 gen;
		};
	}
}
