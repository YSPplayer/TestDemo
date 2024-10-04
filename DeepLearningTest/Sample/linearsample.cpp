/*
 �����ˣ���������
 �������ڣ�2024-10-3
*/
#include "linearsample.h"
#include "../Util/util.h"
namespace Dtrain {
	using namespace Dtrain::Tool;
	/// <summary>
	/// ��ʼ���������ģ�� y = w1x1 + w2x2 + b������ֵ�����ɵ�����ԭ��ģ�Ͳ���
	/// </summary>
	/// <param name="count"></param>
	/// <param name="x1Range"></param>
	/// <param name="x2Range"></param>
	/// <param name="features"></param>
	/// <param name="labels"></param>
	LinearModelParameter LinearSample::GetLinearSample(int sampleSize, const LinearModelRandomRange& randomRange, std::vector<Eigen::VectorXd>& features, std::vector<double>& labels) {
		//��ʼ��ģ�Ͳ���
		LinearModelParameter mParameter;
		mParameter.w1 = Util::GetRandomNumber<double>(std::get<0>(randomRange.w1Range), std::get<1>(randomRange.w1Range));
		mParameter.w2 = Util::GetRandomNumber<double>(std::get<0>(randomRange.w2Range), std::get<1>(randomRange.w2Range));
		mParameter.b = Util::GetRandomNumber<double>(std::get<0>(randomRange.bRange), std::get<1>(randomRange.bRange));
		//���������ͱ�ǩ
		for (int i = 0; i < sampleSize; ++i) {
			double x1 = Util::GetRandomNumber<double>(std::get<0>(randomRange.x1Range), std::get<1>(randomRange.x1Range));
			double x2 = Util::GetRandomNumber<double>(std::get<0>(randomRange.x2Range), std::get<1>(randomRange.x2Range));
			double noise = Util::GetRandomNumber<double>(0.0, 0.01);//����������
			double y = mParameter.w1 * x1 + mParameter.w2 * x2 + mParameter.b + noise; //����ģ�ͽ��	
			Eigen::VectorXd feature(2); // �����趨������ά��Ϊ2
			feature << x1, x2; // ��x1��x2��ֵ������������
			features.push_back(feature); // ����
			labels.push_back(y); //����
		}
		return mParameter;
	}
}