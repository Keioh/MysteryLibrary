#pragma once
namespace MysteryLibrary
{
	enum LoopCode
	{
		LOOP_ERR = -1,//何かしらのエラー
		UNLOOPING,//ループ不可能(未許可)またはループしない	
		LOOPING//ループ可能(許可)またはループ中
	};
}