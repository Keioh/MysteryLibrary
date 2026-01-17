// MysteryLibrary.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//Project設定で実行可能インクルード先にMeysteryLibrary\main\headerを追加すること

#include <iostream>
#include "main/header/App.h"

using namespace MysteryLibrary;


int main()
{
    bool isStarted = false;
    App main;

    std::cout << "Init():START\n";
    main.Init();
    std::cout << "Init():END\n";

    while (main.CheckLoop(LoopCode::LOOPING))
    {
        std::cout << "Looping\n";

        if (isStarted == false)
        {
            std::cout << "LOOP:Start():START\n";
            main.Start();
            isStarted = true;
            std::cout << "LOOP:Start():END\n";

        }

        std::cout << "LOOP:Begin():START\n";
        main.Begin();
        std::cout << "LOOP:Begin():END\n";

        std::cout << "LOOP:Update():START\n";
        main.Update();
        std::cout << "LOOP:Update():END\n";

        std::cout << "LOOP:End():START\n";
        main.End();        
        std::cout << "LOOP:End():END\n";


        break;
    }

    std::cout << "Exit():START\n";
    main.Exit();
    std::cout << "Exit():END\n";

}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
