/*
 创建人：神数不神
 创建日期：2024-10-3
*/
#include "linearsample.h"
#include "../Util/util.h"
namespace Dtrain {
	using namespace Dtrain::Tool;
	/// <summary>
	/// 初始化随机线性模型 y = w1x1 + w2x2 + b，返回值是生成的所有原初模型参数
	/// </summary>
	/// <param name="count"></param>
	/// <param name="x1Range"></param>
	/// <param name="x2Range"></param>
	/// <param name="features"></param>
	/// <param name="labels"></param>
	LinearModelParameter LinearSample::GetLinearSample(int sampleSize, const LinearModelRandomRange& randomRange, std::vector<Eigen::VectorXd>& features, std::vector<double>& labels) {
		//初始化模型参数
		LinearModelParameter mParameter;
		mParameter.w1 = Util::GetRandomNumber<double>(std::get<0>(randomRange.w1Range), std::get<1>(randomRange.w1Range));
		mParameter.w2 = Util::GetRandomNumber<double>(std::get<0>(randomRange.w2Range), std::get<1>(randomRange.w2Range));
		mParameter.b = Util::GetRandomNumber<double>(std::get<0>(randomRange.bRange), std::get<1>(randomRange.bRange));
		//生成特征和标签
		for (int i = 0; i < sampleSize; ++i) {
			double x1 = Util::GetRandomNumber<double>(std::get<0>(randomRange.x1Range), std::get<1>(randomRange.x1Range));
			double x2 = Util::GetRandomNumber<double>(std::get<0>(randomRange.x2Range), std::get<1>(randomRange.x2Range));
			double noise = Util::GetRandomNumber<double>(0.0, 0.01);//额外噪声项
			double y = mParameter.w1 * x1 + mParameter.w2 * x2 + mParameter.b + noise; //线性模型结果	
			Eigen::VectorXd feature(2); // 这里设定特征的维度为2
			feature << x1, x2; // 将x1和x2赋值到特征向量中
			features.push_back(feature); // 特征
			labels.push_back(y); //房价
		}
		return mParameter;
	}
}