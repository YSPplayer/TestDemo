using UnityEngine;
using Game.Core;
namespace Game.Ui
{
	public class BeastClientCard : ClientCard
	{
		override protected void Awake()
		{
			InitVariable();
		}
		override protected void InitVariable() {
			base.InitVariable();
			//¥Ê¥¢∂‘œÛ
			Transform canvas = GameObject.Find("BeastCard/Canvas").transform;
			Images["Bg"] = canvas.Find("Bg").GetComponent<UnityEngine.UI.Image>();
			Images["Role"] = canvas.Find("Role").GetComponent<UnityEngine.UI.Image>();
			Images["Des"] = canvas.Find("Des").GetComponent<UnityEngine.UI.Image>();
			Images["Frame"] = canvas.Find("Frame").GetComponent<UnityEngine.UI.Image>();
			Images["Lp"] = canvas.Find("Lp").GetComponent<UnityEngine.UI.Image>();
			Images["Attack"] = canvas.Find("Attack").GetComponent<UnityEngine.UI.Image>();
			Images["Defense"] = canvas.Find("Defense").GetComponent<UnityEngine.UI.Image>();
			Images["Type"] = canvas.Find("Type").GetComponent<UnityEngine.UI.Image>();
			Texts["Des"] = canvas.Find("Des/Text").GetComponent<UnityEngine.UI.Text>();
			Texts["Lp"] = canvas.Find("Lp/Text").GetComponent<UnityEngine.UI.Text>();
			Texts["Attack"] = canvas.Find("Attack/Text").GetComponent<UnityEngine.UI.Text>();
			Texts["Defense"] = canvas.Find("Defense/Text").GetComponent<UnityEngine.UI.Text>();
			Texts["Type"] = canvas.Find("Type/Text").GetComponent<UnityEngine.UI.Text>();
		}
		protected override void Start()
		{
			base.Start();
		}
		protected override void Update()
		{
			base.Update();
		}
	}
}