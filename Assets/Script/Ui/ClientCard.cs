using System.Collections.Generic;
using System.Diagnostics;
using Unity.VisualScripting;
using UnityEngine;
using Game.Core;
namespace Game.Ui
{
    public class ClientCard : MonoBehaviour
    {
		protected Dictionary<string, UnityEngine.UI.Image> Images { get; set; }//卡牌上的图片
		protected Dictionary<string, UnityEngine.UI.Text> Texts { get; set; }//卡片上的文本
		protected Card CardCore { get; set; } //卡片逻辑核心
		protected virtual void Awake() { }
		protected virtual void InitVariable()
        {
			Images = new Dictionary<string, UnityEngine.UI.Image>();
			Texts = new Dictionary<string, UnityEngine.UI.Text>();
			CardCore = null;
		}

		protected virtual void Start()
        {

        }



		protected virtual void Update()
        {

		}
    }
}
