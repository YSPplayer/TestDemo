namespace Game.Core
{
	public class BeastCard:Card
	{
		public Value Lp { get; set; } //卡片生命值
		public Value Attack { get; set; } //卡片攻击力
		public Value Defense { get; set; } //卡片防御力

		public BeastType BeastType { get; set; } //卡片类型

		public BeastCard(Value lp, Value attack, Value defense, BeastType beastType)
			: base() 
		{
			Lp = lp;
			Attack = attack;
			Defense = defense;
			BeastType = beastType;
		}
	}
}
