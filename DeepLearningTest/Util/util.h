/*
 �����ˣ���������
 �������ڣ�2024-10-3
*/
#pragma once
#include <random>
namespace Dtrain {
	namespace Tool {
		class Util {
		public:
			/// <summary>
			/// ��ȡ�������������Сֵ�����������ֵ
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
