
//ベースオブジェクト
#pragma once

namespace MysteryLibrary
{
	class Object
	{
	public:
		virtual void Init();//実行時に一度だけ
		virtual void Start();//Beginより先に一度だけ
		virtual void Begin();//updateより先に
		virtual void Update();//都度更新
		virtual void End();//updateより後に

	protected:

	private:

	};
}
