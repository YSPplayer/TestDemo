//用于数值计算的类
namespace Game.Core
{
	public class Value
	{
		public int _Value { get; set; }//当前存储的真值
		public ValueType _ValueType { get; set; } //当前值的种类
		public Value(int _Value)
		{ 
			this._Value = _Value;
			this._ValueType = ValueType.Normal;
		}
	}
}
