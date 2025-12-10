
//ベースオブジェクト
#pragma once


class Object
{
public:
	void Init();//実行時に一度だけ
	void Begin();//updateより先に
	void Update();//都度更新
	void End();//updateより後に

protected:

private:


};
