/*
 创建人：神数不神
 创建日期：2024-10-3
*/
#include "util.h"
namespace Dtrain {
	namespace Tool {
		std::random_device Util::rd;
		std::mt19937 Util::gen(rd());
	}
}
