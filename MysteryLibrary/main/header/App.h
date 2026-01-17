//このファイルにメインの処理を記述していく
#pragma once
#include "Frame/MysteryFrame.h"//ベースファイル

namespace MysteryLibrary
{
	class App : public MysteryFrame
	{
	public:
		void Init();//実行時に一度だけ
		void Start();//Beginより先に一度だけ
		void Begin();//updateより先に
		void Update();//都度更新
		void End();//updateより後に
		void Exit();//アプリケーション終了前に

	protected:

	private:

	};
}